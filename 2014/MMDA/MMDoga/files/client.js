/******************************************************************************/
/*                                                                            */
/*                                 client.js                                  */
/*                                                                            */
/******************************************************************************/
$(function() {
	var SOCKET = io.connect(null, {port:3000});

	SOCKET.on('playVideo', function(name) {
		var video = $("video")[0];
		video.pause();
		video.setAttribute("src", "http://" + location.hostname + ":3001/" + name);
		video.load();
		video.play();
	});
});

