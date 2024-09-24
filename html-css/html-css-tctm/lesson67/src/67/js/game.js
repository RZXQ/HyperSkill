var iconArr = document.getElementsByClassName('icon');
for (var i = 0; i < iconArr.length; i++) {
  iconArr[i].onmousemove = function() {
    this.style.transform = 'scale(1.2)';
  };
}



