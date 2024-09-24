function clickHandle(i, obj) {
  obj.onclick = function() {
    frames[i].style.animation = 'introduce1 0.5s forwards';
  };
  var close = frames[i].getElementsByClassName('close')[0];
  close.onclick = function() {
    frames[i].style.animation = 'introduce2 0.5s forwards';
  };
}

//请在下方写你的代码：调用方法完成动画效果





