window.$ = HTMLElement.prototype.$ = function(selector) {
  //如果$被全局调用，就在document中找，
  //否则，在当前元素下找
  var elems = (this == window ? document : this)
    .querySelectorAll(selector);
  if (elems == null) {//如果没找到
    return null;
  } else if (elems.length == 1) {//如果只找到一个
    return elems[0]; //只返回一个
  } else {//如果找到多个
    return elems; //返回元素对象的集合
  }
};
/*保存广告数据的数组*/
var imgs = [
  { 'i': 0, 'img': 'imgs/banner_01.jpg' },
  { 'i': 1, 'img': 'imgs/banner_02.jpg' },
  { 'i': 2, 'img': 'imgs/banner_03.jpg' },
  { 'i': 3, 'img': 'imgs/banner_04.jpg' },
  { 'i': 4, 'img': 'imgs/banner_05.jpg' }
];
var adv = {
  LIWIDTH: 900,//每个图片li的宽度
  DURATION: 500,//每次滚动的总时长
  INTERVAL: 20, //滚动动画每一步的时间间隔
  WAIT: 1400,//自动轮播的时间间隔
  timer: null,//记录当前正在轮播的动画的序号
              //每次启动新动画，都要先停旧动画

  canAuto: true,//是否可以执行自动轮播

  ulImgs: null,//要轮播的图片ul
  ulIdxs: null,//序号的ul
  init: function() {
    var self = this;//留住this
    //找到id为imgs的ul，保存在self的ulImgs中
    self.ulImgs = $('#imgs');
    //设置ulImgs的宽为LIWIDTH*imgs中的图片个数
    //self.ulImgs.style.width=
    //self.LIWIDTH*imgs.length+"px";
    //找到id为indexs的ul，保存在self的ulIdxs
    self.ulIdxs = $('#indexs');
//i从0开始，创建空数组idxs=[],到<imgs的length结束，
//   将i+1后放入idx的当前位置，之后i递增1
    for (var i = 0, idxs = []; i < imgs.length; idxs[i] = i++ + 1) ;
    //将'<li class="hover">'
    //	和idxs按'</li><li>'拼接后的结果
    //	再拼接'</li>',放入self的ulIdxs的内容中
    self.ulIdxs.innerHTML = '<li class="hover">'
      + idxs.join('</li><li>') + '</li>';

    //刷新一次界面
    self.updateView();

    //为self的ulIdxs绑定mouseover事件,启动手动轮播
    self.ulIdxs.onmouseover = function() {
      //获得事件对象e
      var e = window.event || arguments[0];
      //获得目标对象target
      var target = e.srcElement || e.target;
      //  如果target是LI,且target的内容-1不是imgs中第一个i
      if (target.nodeName == 'LI'
        && target.innerHTML - 1 != imgs[0].i) {
        $('#indexs>.hover').className = '';
        $('#indexs>li')[imgs[0].i].className = 'hover';
        self.move(target.innerHTML - 1 - imgs[0].i);
        //n=新位置-原位置
      }
    };

    //找到slider，绑定mouseover和mouseout事件
    $('#slider').onmouseover = function() {
      self.canAuto = false;
    };
    $('#slider').onmouseout = function() {
      self.canAuto = true;
    };
    self.startAutoMove();
  },
  updateView: function() {
    var self = this;//留住this
    //遍历imgs中每个对象,同时创建空数组lis
    for (var i = 0, lis = []; i < imgs.length; i++) {
      //    拼接字符串：'<li><img src="'
      //                +当前对象的img+'"/></li>'
      lis[i] = '<li><img src="'
        + imgs[i].img + '"/></li>';
    }//设置self的ulImgs的内容为lis无缝拼接的结果
    self.ulImgs.innerHTML = lis.join('');
    //删除旧index上的hover类：
    //	找到#indexs下的hover类的元素，清除className
    $('#indexs>.hover').className = '';
    //为选中的index增加hover类
    //  将self的ulIdx下所有li中
    //  和imgs中0位置对象的i属性对应位置的li，
    //	设置为hover
    self.ulIdxs.$('li')[imgs[0].i].className = 'hover';
  },
  startAutoMove: function() {//负责启动自动轮播
    var self = this;
    self.timer = setTimeout(function() {
      if (self.canAuto) {//可选择不调用move
        self.move(1);
      } else {//保持自动轮播始终执行
        self.startAutoMove();
      }
    }, self.WAIT);
  },
  //将ul移动n个位置
  move: function(n) {
    var self = this;//留住this
    //先停止正在播放的动画
    clearTimeout(self.timer);
    self.timer = null;
    if (n < 0) {//如果n<0
      //    从倒数-n开始删除-n个元素，保存在dels中
      var dels = imgs.splice(imgs.length - (-n), -n);
      //    将剩余imgs拼接到dels结尾，再保存回imgs中
      imgs = dels.concat(imgs);
      //    调用self的updateView，刷新界面
      self.updateView();
      //    修改self的ulImgs的left为LIWIDTH*n
      self.ulImgs.style.left = self.LIWIDTH * n + 'px';
    }
    //调用self的moveStep方法，传入参数n
    self.moveStep(n);
  },
  moveStep: function(n) {
    var self = this;//留住this
    //计算步长：step=LIWIDTH*n/(DURATION/INTERVAL)
    var step =
      self.LIWIDTH * n / (self.DURATION / self.INTERVAL);
    //获得ulImgs计算后的样式style
    var style = getComputedStyle(self.ulImgs);
    //用style的left，转为浮点数后-step，存为left
    var left = parseFloat(style.left) - step;
    //设置ulImgs的left为left
    self.ulImgs.style.left = left + 'px';
    //如果(n<0且left<0)或(n>0&&left>LIWIDTH*-n)
    if (n < 0 && left < 0
      || n > 0 && left > self.LIWIDTH * -n) {
      //	启动一次性定时器，间隔INTERVAL，序号存在timer中
      //	定时器中的匿名函数中调用self的moveStep，传入n
      self.timer = setTimeout(function() {
        self.moveStep(n);
      }, self.INTERVAL);
    } else {//否则
      if (n > 0) {//如果n>0
        //      从数组开头位置删除n个元素，保存在dels中
        var dels = imgs.splice(0, n);
        //      将dels拼接到imgs结尾，再存回imgs中
        imgs = imgs.concat(dels);
        //      调用self.updateView刷新页面
        self.updateView();
        //      将self的ulImgs的left重置为0
        self.ulImgs.style.left = '0px';
      }
      //只要手动轮播停止，就启动自动轮播
      self.startAutoMove();
    }
  }
};
// window.addEventListener("load",function(){
//     adv.init();
// },false);
