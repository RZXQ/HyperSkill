var middle = document.getElementById('middle');
var album_maxWidth = 3500;

var album_l = middle.offsetLeft;
setInterval(function() {
  album_l -= 2;
  if (album_l <= -album_maxWidth) {
    album_l = 0;
  }
  middle.style.left = album_l + 'px';
}, 30);

