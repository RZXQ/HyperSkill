var list = document.getElementById('list');
var word = document.getElementById('word');

var arr = ['吃饭', '睡觉', '打豆豆'];
for (var i = 0; i < arr.length; i++) {
  var temp = document.createElement('li');
  temp.innerHTML = arr[i];
  list.append(temp);
}
word.onblur = function() {
  var temp = document.createElement('li');
  temp.innerHTML = word.value;
  list.append(temp);
};

