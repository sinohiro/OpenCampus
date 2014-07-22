/******************************************************************************/
/*                                                                            */
/*                        -- やっぱりJSは最高だぜ! --                         */
/*                                                                            */
/******************************************************************************/
var LOG_LEVEL = 2;
var PORT = 3000;
var DIR_NAME = "files";

var fs = require('fs');
var http = require('http');
var server = http.createServer(handler);
var io = require('socket.io').listen(server, {'log level':LOG_LEVEL});
server.listen(PORT);


/*------------------------------------*/
/*              WebSocket             */
/*------------------------------------*/
var NOW_VIDEO = "1.mp4";
console.log("\t-------");
console.log("\tAccess! => http://(IPAddress):"+PORT+"/");
console.log("\t-------");

io.sockets.on('connection', function(socket) {
	socket.emit('playVideo', NOW_VIDEO);
	console.log('\tnewConnection!');

	socket.on('disconnect', function() {
		console.log("\tDisConnect");
	});
});


/*------------------------------------*/
/*              WebServer             */
/*------------------------------------*/
var url = require('url');
var qs = require('querystring');

function handler(req, res) {
	var parse = url.parse(req.url, true);

	// Streaming Request
	if (parse.pathname === '/MMDoga') {
		var name = parse.query.name;
		if (!(/^[!-~]+$/.test(name))) {
			res.writeHead(403);
			return res.end('403 Error!');
		}

		io.sockets.emit('playVideo', name);
		NOW_VIDEO = name;
		res.writeHead(200);
		res.end("OK");
	}

	// Static Contents
	var filename = (parse.pathname === '/') ? '/index.html' : parse.pathname;
	fs.readFile(__dirname + '/' + DIR_NAME + filename, function(err, content) {
		if (err) {
			res.writeHead(404);
			return res.end('Not Found');
		}

		res.writeHead(200);
		res.end(content);
	});
}

