//请在下方写你的代码：实现添加头像的功能

//获取id为heroHead的ul存储在变量ulHead中
var ulHead = document.getElementById('heroHead');
//创建数组arrHead存储li
var arrHead = [];

/* (预留)循环创建15个li并分别为其设置背景图yx01.jpg,yx02.jpg...
并将其添加到id为heroHead的ul中  */
for (var i = 1; i <= 15; i++) {
  arrHead[i - 1] = document.createElement('li');
  if (i < 10) {
    arrHead[i - 1].style.backgroundImage = 'url(\'images/yx0' + i + '.jpg\')';
  } else {
    arrHead[i - 1].style.backgroundImage = 'url(\'images/yx' + i + '.jpg\')';
  }
  ulHead.append(arrHead[i - 1]);
}
