var btn = document.getElementById('businessCard');
var cardImage = document.getElementById('cardImage');
var man = document.getElementById('man');
var woman = document.getElementById('woman');
var genderArr = document.getElementsByClassName('gender');
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
