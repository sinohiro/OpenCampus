#
# https://github.com/jimm/midilib/blob/master/examples/strings.rb
# http://miettal.hatenablog.com/entry/2014/06/05/030423
#
require 'midilib/sequence'
require 'midilib/consts'
require 'pp'

#
# Header
#
ppqn = 480
tempo = 200;
seq = MIDI::Sequence.new()
File.open(ARGV[0], 'rb') do |file|
  seq.read(file) do |track, num_tracks, i|
    #puts "read track #{track ? track.name : ''} (#{i} of #{num_tracks})"
  end
  ppqn = seq.ppqn
end


#
# Data
#
data = {}
include MIDI
seq.each do |track|
  #puts "*** track name \"#{track.name}\""
  #puts "instrument name \"#{track.instrument}\""
  #puts "#{track.events.length} events"
  
  track.each do |event|
	tempo = event.tempo if event.kind_of?(MIDI::Tempo)
    next unless event.kind_of?(MIDI::NoteEvent)

	time = event.time_from_start
    freq = (440.0 * (2.0 ** ((event.note - 69.0) / 12.0))).round
    velocity = event.velocity
    channel = event.channel
	duration = (((event.delta_time.to_f / ppqn.to_f) * tempo.to_f) * 0.001).round
	note_event = event.kind_of?(MIDI::NoteOn) ? 'ON' : 'OFF'

    data[time] = [] unless data.key?(time)
	data[time] << {:event => note_event, :freq => freq, :v => velocity, :ch => channel, :duration => duration}
  end
end


#
# mbed
#
data.each_value do | each |
  each.each do | each_each |
    next if (each_each[:duration] == 0)
	
	duration = (each_each[:duration] * 0.001).round(3)
	if (each_each[:event] == 'ON')
	  puts "wait(#{duration});"
	elsif (each_each[:event] == 'OFF')
	  puts "buzzer.beep(#{each_each[:freq]}, #{duration});"
    end
  end
end




#pp data