var btn = document.getElementsByTagName('span');
var arr = document.getElementsByTagName('img');
arr[0].className = 'active';

for (var i = 0; i < btn.length; i++) {
  btn[i].index = i;
  btn[i].onclick = function() {
    arr[0].className = arr[1].className = '';
    arr[this.index].className = 'active';
  };
}
