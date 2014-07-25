# coding: utf-8
require 'webrick'
require 'webrick/httpproxy'
require 'uri'
require 'pp'
require 'json'


def subarr(a, b)
  length = [a.length, b.length].min
  
  new = Array.new
  length.times do |i|
    new << a[i] - b[i]
  end
  
  return new
end


def getHp(body)
  json = JSON.parse(body[7..-1])['api_data']
  return nil if json.nil?
  
  max_hp = json['api_maxhps'][1, 6]
  now_hp = json['api_nowhps'][1, 6]
  expect_hp = now_hp
  
  # 航空戦
  if (!json['api_stage_flag'].nil? && json['api_stage_flag'][2] == 1)
    expect_hp = subarr(expect_hp, json['api_kouku']['api_stage3']['api_fdam'][1, 6])
  end
  
  # 支援艦隊
  # 実装しない
  
  # 開幕魚雷
  if (!json['api_opening_flag'].nil? && json['api_opening_flag'] == 1)
    expect_hp = subarr(expect_hp, json['api_opening_atack']['api_fdam'][1, 6])
  end
  
  # 砲撃戦
  if !json['api_hourai_flag'].nil?
    json['api_hourai_flag'].each_with_index do |flag, i|
      next if flag != 1
      tmp = json["api_hougeki#{i+1}"]
      next if tmp.nil?
    
      list = tmp['api_df_list']
      values = tmp['api_damage']
    
      list.each_with_index do | ship, j |
        next if ship == -1
        next unless ship[0].between?(1, 6)
        values[j].each do | val |
          expect_hp[ship[0] - 1] -= val
        end
      end
	end
  elsif !json['api_hougeki'].nil?
    tmp = json['api_hougeki']
    list = tmp['api_df_list']
    values = tmp['api_damage']
    
    list.each_with_index do | ship, j |
      next if ship == -1
      next unless ship[0].between?(1, 6)
      values[j].each do | val |
        expect_hp[ship[0] - 1] -= val
      end
    end
  end
  
  # 雷撃戦
  if (!json['api_hourai_flag'].nil? && json['api_hourai_flag'][3] == 1)
    expect_hp = subarr(expect_hp, json['api_raigeki']['api_fdam'][1, 6])
  end
    
  return max_hp, now_hp, expect_hp
end



handler = Proc.new() {|req,res|
  list = [
    '203.104.105.167',
    '125.6.184.15',
    '125.6.184.16',
    '125.6.187.205',
    '125.6.187.229',
    '125.6.187.253',
    '125.6.188.25',
    '203.104.248.135',
    '125.6.189.7',
    '125.6.189.39',
    '125.6.189.71',
    '125.6.189.103',
    '125.6.189.135',
    '125.6.189.167',
    '125.6.189.215',
    '125.6.189.247',
    '203.104.209.23',
    '203.104.209.39'
  ]
  
  if list.include?(req.host) and (res['content-type'] == 'text/plain' or res['content-type'] == 'application/json') and (req.path == '/kcsapi/api_req_sortie/battle' or req.path == '/kcsapi/api_req_battle_midnight/battle')
    pp res.body
    max_hp, now_hp, expect_hp = getHp(res.body)
    pp max_hp
    pp now_hp
    pp expect_hp
	
	flag = false
	expect_hp.each_with_index do | index |
	  if 0.25 >= (expect_hp[index] / max_hp[index])
	    flag = true
	    break
      end
    end
	
    if flag
	  request = Net::HTTP::Get.new('/W7')
	  Net::HTTP.start('localhost', 80) {|http|
        http.request(request)
      }
	end
  end
}

s = WEBrick::HTTPProxyServer.new(
  :BindAddress => '127.0.0.1',
  :Port => 8080,
  :ProxyVia => false,
  :ProxyContentHandler => handler
)

Signal.trap('INT') do
  s.shutdown
end

s.start
