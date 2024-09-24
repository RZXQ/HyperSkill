window.onload = function() {
  slider.width = 720;//配置合适的宽度
  slider.photos = [  //配置图片信息
    { 'num': 1, 'img': 'imgs/1.jpg' },
    { 'num': 2, 'img': 'imgs/2.jpg' },
    { 'num': 3, 'img': 'imgs/3.jpg' },
    { 'num': 4, 'img': 'imgs/4.jpg' },
    { 'num': 5, 'img': 'imgs/5.jpg' }
  ];
  slider.init();  //轮播初始化
  userInfo();
  sideList();
};

//给每个导航选项添加动画效果
function userInfo() {
  var info = document.querySelectorAll('.opr-info');
  for (var i = 0; i < info.length; i++) {
    infoShow(i, info[i]);
  }
}

function infoShow(i, obj) {
  //预留     添加鼠标移入的效果
  obj.onmouseover = function() {
    obj.style.backgroundColor = 'white';
    var children = obj.children;
    for (var i = 0; i < children.length; i++) {
      if (i == 1) {
        children[i].className = 'down-icon icon-up';
      }
      if (i == 2) {
        children[i].style.display = 'block';
      }
    }
  };
  //添加鼠标移出的效果
  obj.onmouseout = function() {
    obj.style.backgroundColor = '#f5f5f5';
    var children = obj.children;
    for (var i = 0; i < children.length; i++) {
      if (i == 1) {
        children[i].className = 'down-icon icon-down';
      }
      if (i == 2) {
        children[i].style.display = 'none';
      }
    }
  };
}

//左侧导航栏动画
function sideList() {
  var list = document.querySelectorAll('#side-list li');
  for (var i = 0; i < list.length; i++) {
    listShow(i, list[i]);
  }
}

function listShow(i, obj) {
  var hiddenBox = document.querySelectorAll('.hidden-box');
  obj.onmouseover = function() {
    hiddenBox[i].style.display = 'block';
  };
  hiddenBox[i].onmouseover = function() {
    this.style.display = 'block';
  };
  obj.onmouseout = function() {
    hiddenBox[i].style.display = 'none';
  };
  hiddenBox[i].onmouseout = function() {
    this.style.display = 'none';
  };
}













