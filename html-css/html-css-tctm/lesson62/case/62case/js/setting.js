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
  // 用户名
  if (i == 0) {
    var userName = inputsArr[i].value;
    var reg = /^[a-zA-Z0-9_]{3,10}$/;
    if (!reg.test(userName)) {
      alert('请输入符合要求的昵称');
      inputsArr[i].value = '';
      return false;
    }
  }

}

