var publish = document.getElementById('publish');
var show = document.getElementById('show');
var txt = document.getElementById('txt');
var prompt = document.getElementById('prompt');
var txtNum = 200;
//空数组xArr
var xArr = [];

publish.onclick = function() {
  if (txt.value.length > 200) {
    alert('字数过多，请重新输入');
  } else {
    f();
  }
  //获取x，循环遍历添加点击事件
  var xArr = document.getElementsByClassName('x');
  for (var i = 0; i < xArr.length; i++) {
    xArr[i].onclick = function() {
      show.removeChild(this.parentNode);
    };
  }
};

function f() {
  var p = document.createElement('p');
  var time = document.createElement('span');
  //创建diary，并将diary添加为第一个节点
  var diary = document.createElement('div');
  show.appendChild(diary);
  diary.appendChild(p);
  diary.appendChild(time);
  //创建x并添加到页面
  var x = document.createElement('span');
  x.className = 'x';
  x.innerHTML = 'x';
  diary.appendChild(x);
  p.innerHTML = txt.value;
  time.innerHTML = getTime();
  prompt.innerHTML = '还可以输入200个字';
  txt.value = '';
}

txt.onkeyup = function() {
  txtNum = 200 - this.value.length;
  prompt.innerHTML = '还可以输入' + txtNum + '个字';
  if (txtNum < 0) {
    prompt.innerHTML = '字数超额，请重新编辑内容~';
    prompt.style.color = 'red';
    return;
  } else {
    prompt.style.color = 'black';
  }
};

function getTime() {
  var myDate = new Date(),
    nowMonth = myDate.getMonth(),
    nowDay = myDate.getDate(),
    nowHour = myDate.getHours(),
    nowMin = myDate.getMinutes();
  var nowTime = nowMonth + 1 + '月' + nowDay + '日' + nowHour + ':' + nowMin;
  return nowTime;
}


