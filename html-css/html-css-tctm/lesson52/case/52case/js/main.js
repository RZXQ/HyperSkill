// 泡泡
var bubbleArr = document.getElementsByClassName('friendOn');
var maxWidth = 100;
var maxHeight = 380;
for (var i = 0; i < bubbleArr.length; i++) {
  bubbleArr[i].l = bubbleArr[i].offsetLeft;
  bubbleArr[i].t = bubbleArr[i].offsetTop;

  bubbleArr[i].speedX = 5;
  bubbleArr[i].speedY = 5;

  run(bubbleArr[i]);
}

// 可以封装起来
function run(obj) {
  obj.timer = setInterval(function() {
    obj.l += obj.speedX;
    obj.t += obj.speedY;

    if (obj.l >= maxWidth) {
      obj.speedX *= -1;
    } else if (obj.l <= 0) {
      obj.speedX *= -1;
    }
    if (obj.t >= maxHeight) {
      obj.speedY *= -1;
    } else if (obj.t <= 0) {
      obj.speedY *= -1;
    }
    obj.style.left = obj.l + 'px';
    obj.style.top = obj.t + 'px';
  }, 300);
}

