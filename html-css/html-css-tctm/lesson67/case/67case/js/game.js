var iconArr = document.getElementsByClassName('icon');
for (var i = 0; i < iconArr.length; i++) {
  iconArr[i].onmousemove = function() {
    this.style.transform = 'scale(1.2)';
  };
}

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
    document.onmousemove = function(event) {
      var dot = document.createElement('div');
      dot.className = 'dot';
      dot.style.left = event.clientX + 'px';
      dot.style.top = event.clientY + 'px';
      document.body.append(dot);
    };
    document.onmouseup = function() {
      document.onmousemove = document.onmouseup = null;
    };
  };
}

