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
seq = MIDI::Sequence.new()
File.open(ARGV[0], 'rb') do |file|
  seq.read(file) do |track, num_tracks, i|
    puts "read track #{track ? track.name : ''} (#{i} of #{num_tracks})"
  end
  p = seq.ppqn
end


#
# Data
#
include MIDI
seq.each do |track|
  ##pp track.ppqn
  puts "*** track name \"#{track.name}\""
  puts "instrument name \"#{track.instrument}\""
  puts "#{track.events.length} events"

  tempo = 114514
  track.each do |event|
    # tempo
    if event.kind_of?(MIDI::Tempo)
      tempo = event.tempo
    end

    # Skip
    next unless event.kind_of?(MIDI::NoteEvent)

    freq = 440.0 * (2.0 ** ((event.note - 69) / 12))
    #time = (event.delta_time / ppqn) * tempo
    time = event.delta_time
    velocity = event.velocity
    channel = event.channel

    e = "Unknown"
    if event.kind_of?(MIDI::NoteOff)
      e = "OFF"
    elsif event.kind_of?(MIDI::NoteOn)
      e = "ON"
    elsif event.kind_of?(MIDI::PolyPressure)
      e = "PolyPressure"
    end

    puts "#{e}\t : (#{freq}\t#{time}) : #{velocity}\t#{channel}"

    #puts event.data if event.kind_of?(MIDI::MetaEvent) &&
    #[META_TEXT, META_COPYRIGHT, META_SEQ_NAME, META_INSTRUMENT,
    #  META_LYRIC, META_CUE, META_MARKER].include?(event.meta_type)
  end
end

