var publish = document.getElementById('publish');
var show = document.getElementById('show');
var txt = document.getElementById('txt');
publish.onclick = function() {
  f();
};

function f() {
  var diary = document.createElement('div');
  var p = document.createElement('p');
  p.innerHTML = txt.value;
  show.appendChild(diary);
  diary.appendChild(p);
  txt.value = '';
}

