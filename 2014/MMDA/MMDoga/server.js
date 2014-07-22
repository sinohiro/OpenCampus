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
var NOW_VIDEO = null;
console.log("\t-------");
console.log("\tAccess! => http://(IPAddress):"+PORT+"/");
console.log("\t-------");

io.sockets.on('connection', function(socket) {
	if (NOW_VIDEO) socket.emit('playVideo', NOW_VIDEO);
	
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

		io.sockets.emit('playMovie', name);
		NOW_VIDEO = name;
		res.writeHead(200);
		res.end("OK");
	}

	// Static Contents
	fs.readFile(__dirname + '/' + DIR_NAME + parse.pathname, function(err, content) {
		if (err) {
			res.writeHead(404);
			return res.end('Not Found');
		}

		res.writeHead(200);
		res.end(content);
	});
}

