var wolf = document.getElementById('wolf');
var n = 0;
var timer1 = setInterval(function() {
  n++;
  if (n > 5) {
    n = 0;
  }
  wolf.src = 'images/' + n + '.png';
}, 100);
wolf.onclick = function() {
  clearInterval(timer1);
  n = 5;
  setInterval(function() {
    n++;
    if (n > 9) {
      return;
    }
    wolf.src = 'images/' + n + '.png';
  }, 100);
};












