/*密码为4到10位的字母和数字*/
var ps = document.getElementById('ps');
document.onclick = function() {
  var userName = prompt('输入密码才能查看答案');
  var reg = /^[a-zA-Z0-9]{4,10}$/;
  if (reg.test(userName)) {
    ps.style.color = 'red';
  } else {
    alert('密码不正确');
  }
};

