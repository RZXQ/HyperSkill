var publish = document.getElementById('publish');
var show = document.getElementById('show');
var txt = document.getElementById('txt');
//空数组xArr
var xArr = [];

publish.onclick = function() {
  f();
  //获取x，循环遍历添加点击事件
  var xArr = document.getElementsByClassName('x');
  for (var i = 0; i < xArr.length; i++) {
    xArr[i].onclick = function() {
      show.removeChild(this.parentNode);
    };
  }
};

function f() {
  var diary = document.createElement('div');
  var p = document.createElement('p');
  p.innerHTML = txt.value;
  //创建x并添加到页面
  var x = document.createElement('span');
  x.className = 'x';
  x.innerHTML = 'x';
  diary.appendChild(x);
  show.appendChild(diary);
  diary.appendChild(p);
  txt.value = '';
}

