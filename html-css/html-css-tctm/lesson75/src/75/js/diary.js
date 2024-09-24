var publish = document.getElementById('publish');
var show = document.getElementById('show');
var txt = document.getElementById('txt');
//空数组xArr


publish.onclick = function() {
  f();
  //获取x，循环遍历添加点击事件

};

function f() {
  var diary = document.createElement('div');
  var p = document.createElement('p');
  p.innerHTML = txt.value;
  //创建x并添加到页面

  show.appendChild(diary);
  diary.appendChild(p);
  txt.value = '';
}

