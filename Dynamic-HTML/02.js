function draw() {
    var can = document.getElementById("can");
    var ctx = can.getContext("2d");
    ctx.beginPath();
    ctx.arc(100, 125, 100, 0, 2 * Math.PI);
    ctx.fillStyle = "green";
    ctx.fill();
    ctx.moveTo(110, 60);
    ctx.arc(65, 100, 20, 30, 0, Math.PI);
    ctx.strokeStyle = "yellow";
    ctx.fill();
    ctx.moveTo(110, 60);
    ctx.arc(155, 100, 20, 30, 0, Math.PI);
    ctx.moveTo(110, 60);
    ctx.fillStyle = "red";
    ctx.arc(100, 125, 10, 0, 2 * Math.PI);
    ctx.fill();
    ctx.arc(100, 140, 60, 0, 1 * Math.PI);
    ctx.lineTo(160, 140);
    ctx.fill();
    ctx.strokeStyle = "blue";
    ctx.stroke();
}