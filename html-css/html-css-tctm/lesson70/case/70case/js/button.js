// 添加英雄头像
var ulHead = document.getElementById('heroHead');
var arrHead = [];
for (var i = 1; i <= 26; i++) {
  arrHead[i - 1] = document.createElement('li');
  if (i < 10) {
    arrHead[i - 1].style.backgroundImage = 'url(images/yx0' + i + '.jpg)';
  } else {
    arrHead[i - 1].style.backgroundImage = 'url(images/yx' + i + '.jpg)';
  }
  ulHead.append(arrHead[i - 1]);
}
//创建数组存储本周免费
var free = [];
//创建数组存储新手推荐
var introduction = [];
//创建数组存储坦克
var tank = [];
//创建数组存储战士
var soldiers = [];
//创建数组存储刺客
var assassins = [];
//创建数组存储法师
var mages = [];
//创建数组存储射手
var archers = [];
//创建数组存储辅助
var AUXs = [];
// //将对应角色存入数组中
add();
//为单选框添加点击事件
var inputs = document.getElementsByTagName('input');
for (var j = 0; j < inputs.length; j++) {
  inputs[j].onclick = function() {
    for (var k = 0; k < inputs.length; k++) {
      if (inputs[k].checked) {
        check(k);
      }
    }
  };
}


// 预留
//创建方法，可以将传入的数组显示
function change(arr) {
  for (var i = 0; i < arr.length; i++) {
    arr[i].style.display = 'block';
  }
}

//创建方法让对应按钮点击时只显示相应英雄
function check(name) {
  for (var i = 0; i < arrHead.length; i++) {
    arrHead[i].style.display = 'none';
  }
  if (name == 0) {
    change(free);
  } else if (name == 1) {
    change(introduction);
  } else if (name == 2) {
    change(arrHead);
  } else if (name == 3) {
    change(tank);
  } else if (name == 4) {
    change(soldiers);
  } else if (name == 5) {
    change(assassins);
  } else if (name == 6) {
    change(mages);
  } else if (name == 7) {
    change(archers);
  } else if (name == 8) {
    change(AUXs);
  } else {
    alert('请联系管理员');
  }
}

//add()方法
function add() {
  var num = 0;
  arrHead[num].innerHTML = '云缨';
  assassins[assassins.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '孙策';
  tank[tank.length] = arrHead[num];
  soldiers[soldiers.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '梦琪';
  tank[tank.length] = arrHead[num];
  free[free.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '苏烈';
  tank[tank.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '凯';
  tank[tank.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '李信';
  soldiers[soldiers.length] = arrHead[num];
  assassins[assassins.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '狂铁';
  soldiers[soldiers.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '裴擒虎';
  soldiers[soldiers.length] = arrHead[num];
  free[free.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '上官婉儿';
  free[free.length] = arrHead[num];
  assassins[assassins.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '司马懿';
  assassins[assassins.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '元歌';
  free[free.length] = arrHead[num];
  assassins[assassins.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '女娲';
  mages[mages.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '安琪拉';
  mages[mages.length] = arrHead[num];
  free[free.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '王昭君';
  mages[mages.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '妲己';
  mages[mages.length] = arrHead[num];
  introduction[introduction.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '伽罗';
  archers[archers.length] = arrHead[num];
  free[free.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '百里守约';
  archers[archers.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '公孙离';
  archers[archers.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '黄忠';
  archers[archers.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '盾山';
  AUXs[AUXs.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '明世隐';
  AUXs[AUXs.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '鬼谷子';
  AUXs[AUXs.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '大乔';
  AUXs[AUXs.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '亚瑟';
  soldiers[soldiers.length] = arrHead[num];
  introduction[introduction.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '狄仁杰';
  introduction[introduction.length] = arrHead[num];
  archers[archers.length] = arrHead[num];
  num++;

  arrHead[num].innerHTML = '鲁班';
  introduction[introduction.length] = arrHead[num];
  archers[archers.length] = arrHead[num];
  num++;
}


