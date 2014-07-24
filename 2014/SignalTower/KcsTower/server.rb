require 'serialport'
require 'sinatra'
set :bind, '0.0.0.0'

port = ARGV[0]
sp = SerialPort.new(port, 9600)

get '/' do
	'SignalTower!'
end

get '/:cmd' do
	cmd = params[:cmd]
	if cmd =~ /^[WHLP][0-9a-f]$/i
		'OK'
		sp.write(cmd)
	else
		'Error'
	end	
end

