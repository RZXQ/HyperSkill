window.onload = function() {
  //调用animation函数

};

function animation() {
  var move_zombie = document.getElementById('move_zombie');
  var attack_zombie = document.getElementById('attack_zombie');
  var animate_index = 0;
  setInterval(function() {
    var n = animate_index % 2 + 1;
    move_zombie.style.backgroundImage = 'url' + '(images/' + n + '1' + '.png)';
    var m = animate_index % 3 + 1;
    attack_zombie.style.backgroundImage = 'url' + '(images/' + m + '1' + '.png)';
    animate_index++;
  }, 300);
}
