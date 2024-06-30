function draw() {
    var can = document.getElementById("can");
    var path = can.getContext("2d");
    path.beginPath();
    path.moveTo(0, 0);
    path.lineTo(500, 500);
    path.stroke();
    var can2 = document.getElementById("can2");
    var path2 = can2.getContext("2d");
    path2.beginPath();
    path2.moveTo(50, 0);
    path2.lineTo(100, 50);
    path2.lineTo(40, 50);
    path2.lineTo(100, 0);
    path2.lineTo(70, 80);
    path2.lineTo(50, 0);
    path2.closePath();
    path2.stroke();

}