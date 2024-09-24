var publish = document.getElementById('publish');
var show = document.getElementById('show');
var txt = document.getElementById('txt');

publish.onclick = function() {
  f();
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

  txt.value = '';
}

function getTime() {
  var myDate = new Date(),
    nowMonth = myDate.getMonth(),
    nowDay = myDate.getDate(),
    nowHour = myDate.getHours(),
    nowMin = myDate.getMinutes();
  var nowTime = nowMonth + 1 + '月' + nowDay + '日' + nowHour + ':' + nowMin;
  return nowTime;
}

