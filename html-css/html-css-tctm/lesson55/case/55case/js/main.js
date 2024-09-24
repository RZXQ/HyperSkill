window.onload = function() {

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

// 选项卡
// 获取按钮
  var btnArr = document.getElementsByClassName('btn');
// 获取内容区
  var contentArr = document.getElementsByClassName('wrap');
  contentArr[0].className = 'wrap active';

// 循环遍历所有按钮
  for (var i = 0; i < btnArr.length; i++) {
    // 记录每个按钮的序号
    btnArr[i].index = i;
    // 为其绑定点击事件
    btnArr[i].onclick = function() {
      // 将所有内容区隐藏
      for (var j = 0; j < btnArr.length; j++) {
        contentArr[j].className = 'wrap';
      }
      // 让被选中的内容区显示出来
      contentArr[this.index].className = 'wrap active';
    };
  }

};