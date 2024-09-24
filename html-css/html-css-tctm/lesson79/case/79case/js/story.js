var tudou_list = document.querySelectorAll('.td img');
var tudou_index = 0;
setInterval(function() {
  for (var i = 0; i < tudou_list.length; i++) {
    tudou_list[i].style.display = 'none';
  }
  tudou_list[tudou_index % tudou_list.length].style.display = 'block';
  tudou_index++;
}, 150);

var yangcong_list = document.querySelectorAll('.yc img');
var yangcong_index = 0;
setInterval(function() {
  for (var i = 0; i < yangcong_list.length; i++) {
    yangcong_list[i].style.display = 'none';
  }
  yangcong_list[yangcong_index % yangcong_list.length].style.display = 'block';
  yangcong_index++;
}, 500);

var huasheng_list = document.querySelectorAll('.hs img');
var huasheng_index = 0;
setInterval(function() {
  for (var i = 0; i < huasheng_list.length; i++) {
    huasheng_list[i].style.display = 'none';
  }
  huasheng_list[huasheng_index % huasheng_list.length].style.display = 'block';
  huasheng_index++;
}, 70);

