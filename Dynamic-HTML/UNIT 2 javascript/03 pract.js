function sumno() {
    var n;
    var sum = 0;
    var i;
    n = document.getElementById("no").value;

    for (i = 0; i <= parseInt(n); i++) {
        sum = sum + i;
        document.getElementById("ans").innerHTML += i + "=" + sum + "<br>";
    }
    document.getElementById("ans").innerHTML = "Sum of " + n + "=" + sum;
    return false;
}