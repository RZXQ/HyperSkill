var publish = document.getElementById('publish');
var show = document.getElementById('show');
var txt = document.getElementById('txt');
var prompt = document.getElementById('prompt');
var txtNum = 200;
publish.onclick = function() {
  if (txt.value.length > 200) {
    alert('字数过多，请重新输入');
  } else {
    f();
  }
};

function f() {
  var diary = document.createElement('div');
  var p = document.createElement('p');
  var time = document.createElement('span');
  p.innerHTML = txt.value;
  time.innerHTML = getTime();
  show.appendChild(diary);
  diary.appendChild(p);
  diary.appendChild(time);
  prompt.innerHTML = '还可以输入200个字';
  txt.value = '';
}

txt.onkeyup = function() {
  txtNum = 200 - this.value.length;
  prompt.innerHTML = '还可以输入' + txtNum + '个字';
  if (txtNum < 0) {
    prompt.innerHTML = '字数超额，请重新编辑内容~';
    prompt.style.color = 'red';
  } else {
    prompt.style.color = 'black';
  }
};

function getTime() {
  var myDate = new Date(), nowMonth = myDate.getMonth(), nowDay = myDate.getDate(), nowHour = myDate.getHours(),
    nowMin = myDate.getMinutes();
  var nowTime = nowMonth + 1 + '月' + nowDay + '日' + nowHour + ':' + nowMin;
  return nowTime;
}

