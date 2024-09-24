var sidebar = document.getElementsByClassName('sidebar')[0];
var back = document.getElementsByClassName('back')[0];
window.onscroll = function() {
  scroll_top = document.documentElement.scrollTop;
  if (scroll_top > 650) {
    sidebar.style.position = 'fixed';
    sidebar.style.top = '50%';
    sidebar.style.marginTop = '-265px';
  } else {
    sidebar.style.position = 'relative';
    sidebar.style.top = '';
    sidebar.style.marginTop = '';
  }
};

// 在下方写你的代码： 绑定点击事件
back.onclick = function() {
  var left = getComputedStyle(sidebar).left;
  if (left == '0px') {
    sidebar.style.left = '-150px';
  } else {
    sidebar.style.left = '0px';
  }
};
