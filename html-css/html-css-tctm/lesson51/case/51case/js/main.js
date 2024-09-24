// 给出所有的泡泡和范围
// 所有泡泡
var bubbleArr = document.getElementsByClassName('friendOn');
// 泡泡移动范围
var maxWidth = 100;
// 获取到数组中第一个元素存储到变量b中
var b = bubbleArr[0];
b.l = b.offsetLeft;
b.speedX = 5;
b.timer = setInterval(function() {
  b.l += b.speedX;
  if (b.l >= maxWidth) {
    b.speedX *= -1;
  } else if (b.l <= 0) {
    b.speedX *= -1;
  }
  b.style.left = b.l + 'px';
}, 300);
