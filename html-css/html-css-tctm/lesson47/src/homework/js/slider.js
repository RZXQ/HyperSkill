var slider = {
  WIDTH: 660,
  photos: [{ 'num': 1, 'img': 'imgs/banner_01.jpg' },
    { 'num': 2, 'img': 'imgs/banner_02.jpg' },
    { 'num': 3, 'img': 'imgs/banner_03.jpg' },
    { 'num': 4, 'img': 'imgs/banner_04.jpg' },
    { 'num': 5, 'img': 'imgs/banner_05.jpg' }],
  frame: document.querySelector('#slider'),
  imageUl: document.querySelector('#images'),
  indexUl: document.querySelector('#index'),
  DURATION: 1000,
  INTERVAL: 20,
  WAIT: 2000,
  timer: null,
  canAuto: true,
  curIndex: 1,
  init: function() {
    var self = this;
    self.updateView();

    var indexLi = '';
    for (var i = 0; i < self.photos.length; i++) {
      indexLi += '<li>' + self.photos[i].num + '</li>';
    }
    self.indexUl.innerHTML = indexLi;
    self.updateIndexColor(self.curIndex);
    self.autoPlay();
    var indexs = document.querySelectorAll('#index li');
    for (var i = 0; i < indexs.length; i++) {
      indexs[i].onmouseover = function() {
        self.curindex = this.innerHTML;
        if (self.curindex != self.photos[0].num) {
          self.move(self.curindex - self.photos[0].num);
        }
      };
    }
    document.querySelector('#slider').onmouseover = function() {
      self.canAuto = false;
    };
    document.querySelector('#slider').onmouseout = function() {
      self.canAuto = true;
    };
  },
  updateView: function() {

    var self = this;
    self.frame.style.width = self.WIDTH + 'px';
    self.imageUl.style.width = (self.WIDTH * self.photos.length) + 'px';
    var imageLi = '';
    for (var i = 0; i < self.photos.length; i++) {
      imageLi += '<li style=\'width:' + self.WIDTH + 'px;\'><img src=\'' + self.photos[i].img + '\'/></li>';
    }
    self.imageUl.innerHTML = imageLi;
  },
  updateIndexColor: function(n) {

    var li = document.querySelectorAll('#index li');
    for (var i = 0; i < li.length; i++) {
      li[i].style.backgroundColor = '#3e3e3e';
    }
    li[n - 1].style.backgroundColor = '#b61b1f';
  },
  move: function(n) {
    var self = this;
    clearTimeout(self.timer);
    self.timer = null;
    if (n < 0) {
      var ary = self.photos.splice(self.photos.length - (-n), -n);
      self.photos = ary.concat(self.photos);
      self.updateView();
      self.imageUl.style.left = self.WIDTH * n + 'px';
    }
    self.moveStep(n);
  },
  moveStep: function(n) {
    var self = this;
    var step = self.WIDTH * n / (self.DURATION / self.INTERVAL);
    var style = getComputedStyle(self.imageUl);
    var left = parseFloat(style.left) - step;
    self.imageUl.style.left = left + 'px';

    if (n < 0 && left < 0 || n > 0 && left > self.WIDTH * (-n)) {
      self.timer = setTimeout(function() {
        self.moveStep(n);
      }, self.INTERVAL);
    } else {
      if (n > 0) {
        var ary = self.photos.splice(0, n);
        self.photos = self.photos.concat(ary);
        self.updateView();
        self.imageUl.style.left = '0px';
      }
      self.curindex = self.photos[0].num;
      self.updateIndexColor(self.curindex);
      self.autoPlay();
    }
  },
  autoPlay: function() {
    var self = this;
    self.timer = setTimeout(function() {
      if (self.canAuto) {
        self.move(1);
      } else {
        self.autoPlay();
      }
    }, self.WAIT);
  }
};
