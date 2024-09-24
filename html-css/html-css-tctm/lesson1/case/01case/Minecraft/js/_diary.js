var publish = document.getElementById('publish');
var show = document.getElementById('show');
var txt = document.getElementById('txt');
var prompt = document.getElementById('prompt');
var txtNum = 200;
var xArr = [];

publish.onclick = function() {
  f();
  var xArr = document.getElementsByClassName('x');
  for (var i = 0; i < xArr.length; i++) {
    xArr[i].onclick = function() {
      console.log(this.parentNode);
      console.log(show);
      show.removeChild(this.parentNode);
    };
  }
};

function f() {
  var diary = document.createElement('div');
  var p = document.createElement('p');
  var time = document.createElement('span');
  var x = document.createElement('span');
  x.className = 'x';
  x.innerHTML = 'x';

  p.innerHTML = txt.value;
  time.innerHTML = getTime();

  show.appendChild(diary);
  diary.appendChild(p);
  diary.appendChild(time);
  diary.appendChild(x);

  prompt.innerHTML = '还可以输入200字';
  prompt.style.color = 'black';

  txt.value = '';
}

txt.onkeyup = function() {
  txtNum = 4 - this.value.length;
  prompt.innerHTML = '还可以输入' + txtNum + '字';
  if (txtNum < 0) {
    prompt.innerHTML = '字数超额，已自动帮您保存';
    prompt.style.color = 'red';
    f();
    this.value = '';
    return;
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


