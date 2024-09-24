var inputsArr = document.getElementsByTagName('input');
// 监听输入框，失去焦点时触发验证
for (var i = 0; i < inputsArr.length - 1; i++) {
  bindingOnblur(i);
}

function bindingOnblur(i) {
  inputsArr[i].onblur = function() {
    validate(i);
  };
}

// 遍历输入框，对所需输入框进行验证
function validate(i) {
  //
  // var reg = /^(\s)*$/;
  // var empty = inputsArr[i].value;
  // if (reg.test(empty)){
  // 	alert('您还有内容未填写！');
  // 	return false;
  // }

  // 用户名
  if (i == 0) {
    var userName = inputsArr[i].value;
    var reg = /[a-zA-Z0-9_]{3,10}/;
    if (!reg.test(userName)) {
      alert('请输入符合要求的昵称');
      inputsArr[i].value = '';
      return false;
    }
  }

  // 手机号
  if (i == 3) {
    var reg = /^1[3|4|5|8][0-9]\d{8}$/;
    var phone = inputsArr[i].value;
    if (!(reg.test(phone))) {
      alert('手机号输入有误');
      inputsArr[i].value = '';
      return false;
    }
  }

  // 密码
  if (i == 4) {
    var reg1 = /[A-Z]/;
    var reg2 = /[a-z]/;
    var reg3 = /[0-9]/;
    var password = inputsArr[i].value;
    if (!(reg1.test(password) && reg2.test(password) && reg3.test(password)) || password.length < 6) {
      inputsArr[i].value = '';
      alert('密码设置有误');
    }
  }

  // repwd
  if (i == 9) {
    var password = inputsArr[4];
    var repwd = inputsArr[i].value;
    if (password != repwd) {
      inputsArr[i].value = '';
      alert('两次密码输入不一致');
      return false;
    }
  }

}

