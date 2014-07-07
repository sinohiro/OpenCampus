#
# https://github.com/jimm/midilib/blob/master/examples/strings.rb
# http://miettal.hatenablog.com/entry/2014/06/05/030423
#
require 'midilib/sequence'
require 'midilib/consts'
require 'pp'

class Beep
  include MIDI

  def initialize(file, mbed_flg)
    @is_mbed = mbed_flg
  
    @seq = MIDI::Sequence.new()
    File.open(ARGV[0], 'rb') do |file|
      @seq.read(file)
    end
  end
  
  def parse()
    ppqn = @seq.ppqn
    tempo = 200;

    @seq.each do |track|  
      track.each do |event|
        tempo = event.tempo if event.kind_of?(MIDI::Tempo)
        next unless event.kind_of?(MIDI::NoteEvent)
        
        duration = (((event.delta_time.to_f / ppqn.to_f) * tempo.to_f) * 0.000001).round(4)
        next if duration == 0.0
        
        if event.kind_of?(MIDI::NoteOff)
          freq = (440.0 * (2.0 ** ((event.note - 69.0) / 12.0))).round
          beep(freq, duration)
          next
        end

        suyasuya(duration)
      end
    end
  end
  
  
  private
  def suyasuya(second) 
    puts @is_mbed ? "wait(#{second});" : "sleep #{second}"
  end

  def beep(freq, second)
    puts @is_mbed ? "buzzer.beep(#{freq}, #{second});" : "beep -f #{freq} -l #{second * 1000}"
  end
end



if ARGV[0].nil?
  puts "./dump.rb MidiFile ['mbed'||'pc']"
  exit
end

midi = Beep.new(ARGV[0], (ARGV[1] || 'mbed') == 'mbed')
midi.parse()