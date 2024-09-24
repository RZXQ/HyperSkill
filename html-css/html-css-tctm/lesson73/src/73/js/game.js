var iconArr = document.getElementsByClassName('icon');
for (var i = 0; i < iconArr.length; i++) {
  iconArr[i].onmousemove = function() {
    this.style.transform = 'scale(1.2)';
  };
}

var cute = document.getElementById('cute');
var on = document.getElementById('on');
var off = document.getElementById('off');

on.onclick = function() {
  draw();
};
off.onclick = function() {
  location.reload();
};

function draw() {
  document.onmousedown = function() {
    document.onmousemove = function(ev) {
      var dot = document.createElement('div');
      dot.className = 'dot';
      console.log(ev.offsetX, ev.offsetY);
      dot.style.left = ev.clientX + 'px';
      dot.style.top = ev.clientY + 'px';
      document.body.appendChild(dot);
    };
    document.onmouseup = function() {
      document.onmousemove = document.onmouseup = null;
    };
  };
}

cute.onmousedown = function(ev) {
  var disX = ev.clientX - this.offsetLeft;
  var disY = ev.clientY - this.offsetTop;
  cute.onmousemove = function(ev) {
    var l = ev.clientX - disX;
    var t = ev.clientY - disY;

    this.style.left = l + 'px';
    this.style.top = t + 'px';
  };
  cute.onmouseup = function() {
    cute.onmouseup = cute.onmousemove = null;
  };
};

