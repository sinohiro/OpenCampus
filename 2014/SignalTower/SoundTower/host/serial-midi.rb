require 'serialport'
require 'pp'

class SerialMIDI
	def initialize(port, baud = 9600, ismbed=false)
		@sp = SerialPort.new(port, baud)
		@time = nil
		@ismbed = ismbed
	end

	def start()
		loop do
			data = @sp.read(3)
			event, note, duration, velocity = parse(data)
			next if event.nil?
			play(event == 0x80, note, duration)
		end
	end

	private
	def parse(data)
		bytes = []
			data.bytes do | byte |
			bytes << byte
		end

		event = bytes[0] & 0xf0
		return nil unless (event == 0x80 || event == 0x90)

		note = bytes[1].to_i
		velocity = bytes[2].to_i

		if @time.nil?
			@time = Time.now
			duration = 0
		else
			now = Time.now
			duration = now - @time
			@time = now
		end

		return event, note, duration, velocity
	end

	def play(onflg, note, duration)
		freq = (440.0 * (2.0 ** ((note - 69.0) / 12.0))).round(5)

		# 事前に時間を知らなくて良い
		if @ismbed
			if onflg
				puts "buzzer.on(#{freq});"
			else
				puts "buzzer.stop();"
			end
			return
		end

		# 知らないとダメ
		return if duration == 0
		if onflg
			puts "beep -f #{freq} -l #{duration * 1000}"
		else
			puts "sleep #{duration}"
		end
	end
end

serial = SerialMIDI.new(ARGV[0], 9600)
serial.start()


# こんなことやっても、serialportニキが終わらせてくれない...
Signal.trap(:INT){
	puts "SIGINT"
	exit(0)
}

