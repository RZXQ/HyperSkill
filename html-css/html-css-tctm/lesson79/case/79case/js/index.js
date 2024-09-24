/*完成动画效果*/
var icon_list = document.querySelectorAll('.icon-list a');
for (var i = 0; i < icon_list.length; i++) {
  iconAnimate(i, icon_list[i]);
}

function iconAnimate(i, obj) {
  obj.onmouseover = function() {
    for (var j = 0; j < icon_list.length; j++) {
      icon_list[j].className = '';
    }
    obj.className = 'icon-animate';
  };
}

var window_width = window.innerWidth;
var window_height = window.innerHeight;

var banner = document.getElementsByClassName('banner')[0];
var banner_imgs = document.querySelectorAll('.img-list li');
var content = document.getElementsByClassName('content')[0];

var nav_list = document.querySelectorAll('.bot-nav a');


banner.style.height = (window_height - 87) + 'px';
content.style.height = (window_height - 87) + 'px';
window.onresize = function() {
  banner.style.height = (window.innerHeight - 87) + 'px';
  content.style.height = (window.innerHeight - 87) + 'px';
};

window.onscroll = function() {
  scroll_top = document.documentElement.scrollTop;
  if (scroll_top > window.innerHeight) {
    show();
  } else {
    hide();
  }
};
window.onload = function() {
  var oPre = document.getElementsByClassName('pre')[0];
  var oNext = document.getElementsByClassName('next')[0];
  var oUlBig = document.getElementsByClassName('img-list')[0];
  var oDivSmall = document.getElementsByClassName('index-list')[0];

  var oDiv = document.getElementById('playBox');
  var aBigLi = oUlBig.getElementsByTagName('li');
  var aLiSmall = oDivSmall.getElementsByTagName('li');


  var now = 0;
  for (var i = 0; i < aLiSmall.length; i++) {
    aLiSmall[i].index = i;
    aLiSmall[i].onclick = function() {
      now = this.index;
      tab();
    };
  }

  oPre.onclick = function() {
    now--;
    if (now <= -1) {
      now = aBigLi.length - 1;
    }
    tab();
  };

  oNext.onclick = function() {
    now++;
    if (now >= aBigLi.length) {
      now = 0;
    }
    tab();
  };
  var timer = setInterval(oNext.onclick, 4000);

  function getStyle(obj, name) {
    if (obj.currentStyle) {
      return obj.currentStyle[name];
    } else {
      return getComputedStyle(obj, false)[name];
    }
  }

  function startMove(obj, att, add) {
    clearInterval(obj.timer);
    obj.timer = setInterval(function() {
        var cutt = 0;
        if (att == 'opacity') {
          cutt = Math.round(parseFloat(getStyle(obj, att)));
        } else {
          cutt = Math.round(parseInt(getStyle(obj, att)));
        }
        var speed = (add - cutt) / 4;
        speed = speed > 0 ? Math.ceil(speed) : Math.floor(speed);
        if (cutt == add) {
          clearInterval(obj.timer);
        } else {
          if (att == 'opacity') {
            obj.style.opacity = (cutt + speed) / 100;
            obj.style.filter = 'alpha(opacity:' + (cutt + speed) + ')';
          } else {
            obj.style[att] = cutt + speed + 'px';
          }
        }

      },
      30);
  }

  function tab() {
    for (var i = 0; i < aLiSmall.length; i++) {
      aLiSmall[i].className = '';
    }
    aLiSmall[now].className = 'active';
    startMove(oUlBig, 'left', -(now * aBigLi[0].offsetWidth));
  }
};

var scroll_flag = false;

function show() {
  if (scroll_flag) return;
  for (var i = 0; i < nav_list.length; i++) {
    nav_list[i].style.transform = 'translate(0,0px)';
    nav_list[i].style.opacity = '1';
  }
  scroll_flag = true;
}

function hide() {
  if (!scroll_flag) return;
  for (var i = 0; i < nav_list.length; i++) {
    nav_list[i].style.transform = 'translate(0,80px)';
    nav_list[i].style.opacity = '0';
  }
  scroll_flag = false;
}


