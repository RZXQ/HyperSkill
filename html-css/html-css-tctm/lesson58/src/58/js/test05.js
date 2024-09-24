var middle = document.getElementById('middle');
var album_maxWidth = 1350;
var album_l = middle.offsetLeft;

middle.timer = setInterval(function() {
  album_l -= 2;
  if (album_l <= -album_maxWidth) {
    album_l = 0;
  }
  middle.style.left = album_l + 'px';
}, 30);

middle.onmouseover = function() {
  clearInterval(middle.timer);
};
middle.onmouseleave = function() {
  middle.timer = setInterval(function() {
    album_l -= 2;
    if (album_l <= -album_maxWidth) {
      album_l = 0;
    }
    middle.style.left = album_l + 'px';
  }, 30);
};

// 封装方法预留
function doMove(obj, attr, times, target, fn) {
  var t = 0;
  var b = css(obj, attr);
  var c = target - b;
  var d = times;
  clearInterval(obj.timer);
  obj.timer = setInterval(function() {
    t++;
    if (t >= d) {
      t = d;
      clearInterval(obj.timer);
      obj.timer = null;
    }
    obj.style[attr] = Tween.Cubic.easeInOut(t, b, c, d) + 'px';
    if (t == d) {
      if (typeof fn === 'function')
        fn();
    }
  }, 20);
}

function css(obj, attr) {
  return parseFloat(obj.currentStyle ? obj.currentStyle[attr] : getComputedStyle(obj)[attr]) || 0;
}

function fnTab(index) {
  for (var i = 0; i < dotArr.length; i++) {
    dotArr[i].className = 'dot';
  }
  dotArr[index].className = 'dot active';
}

// 添加代码实现效果


