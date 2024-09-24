//页面主方法
window.onload = function() {
  binding();
  location1();
  pop();
  adv.init();
};

// 关于所有事件绑定动作
function binding() {
  // 给每个泡泡绑定事件
  for (var i = 0; i < popfriend.length; i++) {
    popfriend[i].onmouseover = pause;
    popfriend[i].onmouseout = pop;
    popfriend[i].onclick = frishow;

  }
  // 给头部导航按钮绑定事件
  for (var i = 0; i < navct.length; i++) {
    navct[i].onclick = showContent;

  }
  //给左边导航按钮绑定事件
  for (var i = 0; i < leftnavs.length; i++) {
    leftnavs[i].onclick = showContent;

  }
  //给朋友圈评论按钮添加点击出现留言板事件
  for (var i = 0; i < combuttons.length; i++) {
    combuttons[i].onclick = showCommentArea;
  }
}

//鼠标移入泡泡停止运动
function pause() {
  clearInterval(timer);
}

// 点击切换内容块方法
function showContent() {
  content.style.backgroundImage = 'url(\'imgs/contbg.png\')';
  var navid = this.id;
  var index = navid.substr(-2, 2);
  if (index[0] == 0) {
    index = index.substr(-1, 1);
  }
  console.log(index);
  for (var i = 0; i < showcontent.length; i++) {
    showcontent[i].style.display = 'none';
  }
  showcontent[index - 1].style.display = 'block';

}

//被点击的泡泡最上面显示
function frishow(friend) {
  friend = this;
  for (var i = 0; i < popfriend.length; i++) {
    if (window.getComputedStyle(popfriend[i], null).zIndex == 999) {
      popfriend[i].style.zIndex = 998;
    }
  }
  friend.style.zIndex = 999;

}

//储存每个泡泡一开始的位置，并规定初始运动方向
function location1() {
  for (var i = 0; i < popfriend.length; i++) {
    if (i % 2 == 0) {
      popfriend[i].push = 1;
      popfriend[i].up = -1;
    } else {
      popfriend[i].push = -1;
      popfriend[i].up = 1;
    }
    var pfstyle = window.getComputedStyle(popfriend[i], null);
    //储存每个泡泡一开始的位置
    popfriend[i].top = parseFloat(pfstyle.top, 2);
    popfriend[i].left = parseFloat(pfstyle.left, 2);


  }

}

//泡泡开始运动
function pop() {
  timer = setInterval(function() {
    for (var i = 0; i < popfriend.length; i++) {
      var pfstyle = window.getComputedStyle(popfriend[i], null);
      if (parseFloat(pfstyle.top, 2) < popfriend[i].top - 10) {
        popfriend[i].up = 1;
      } else if (parseFloat(pfstyle.top, 2) > popfriend[i].top + 30) {
        popfriend[i].up = -1;
      }
      if (i % 3 == 0) {
        if (parseFloat(pfstyle.left, 2) < popfriend[i].left - 30) {
          popfriend[i].push = 1;
        } else if (parseFloat(pfstyle.left, 2) > popfriend[i].left + 30) {
          popfriend[i].push = -1;
        }
      } else {
        if (parseFloat(pfstyle.left, 2) < popfriend[i].left - 15) {
          popfriend[i].push = 1;
        } else if (parseFloat(pfstyle.left, 2) > popfriend[i].left + 15) {
          popfriend[i].push = -1;
        }
      }

      popfriend[i].style.top = (parseFloat(pfstyle.top) + 0.1 * popfriend[i].up) + 'px';
      popfriend[i].style.left = (parseFloat(pfstyle.left) + 0.1 * popfriend[i].push) + 'px';

    }

  }, 10);

}
