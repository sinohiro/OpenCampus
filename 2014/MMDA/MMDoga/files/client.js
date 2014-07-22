/******************************************************************************/
/*                                                                            */
/*                                 client.js                                  */
/*                                                                            */
/******************************************************************************/
$(function() {
	var SOCKET = io.connect(null, {port:3000});

	SOCKET.on('playMovie', function(name) {
		var video = $("video")[0];
		video.pause();
		video.setAttribute("src", name);
		video.load();
		video.play();
	});
});

