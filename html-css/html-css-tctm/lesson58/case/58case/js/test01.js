/*实现图片轮播*/
var photo = document.getElementById('photo');
var album_maxWidth = 1050;
var album_l = photo.offsetLeft;
setInterval(function() {
  album_l -= 2;
  if (album_l <= -album_maxWidth) {
    album_l = 0;
  }
  photo.style.left = album_l + 'px';
}, 30);

