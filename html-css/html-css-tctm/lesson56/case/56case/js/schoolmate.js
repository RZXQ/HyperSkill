var btn = document.getElementById('businessCard');
var cardImage = document.getElementById('cardImage');

var man = document.getElementById('man');
var woman = document.getElementById('woman');
var genderArr = document.getElementsByClassName('gender');
var girl = document.getElementById('girl');

btn.onclick = function() {
  cardImage.style.display = 'block';
};

woman.onclick = function() {
  choose('w');
};
man.onclick = function() {
  choose('m');
};

function choose(gender) {
  for (var i = 0; i < genderArr.length; i++) {
    var c = genderArr[i].className.slice(7);
    if (c != gender) {
      genderArr[i].style.display = 'none';
    }
  }
}

var maxWidth = 700;
girl.l = girl.offsetLeft;
var speed = 2;

console.log(maxWidth, girl.l);
setInterval(function() {
  girl.l += speed;

  if (girl.l >= maxWidth) {
    speed *= -1;
  }
  if (girl.l <= 0) {
    speed *= -1;
  }

  girl.style.left = girl.l + 'px';
}, 100);
