var btn = document.getElementById('btn');
var show = document.getElementById('show');
var nameArr = ['二狗', '佩奇', '翠花', '古天乐', '易烊千玺', '路人甲', '童童', '周冬雨'];
var n = 0;
btn.onclick = function() {
  show.innerHTML = nameArr[n];
  n++;
};
