function textvalid() {
    var frm;
    var ptrn = /^[a-zA-Z]+$/;
    frm = document.getElementById("fname").value;
    if (frm == "") {
        document.getElementById("msg").innerHTML = "please Enter Fullname";
        return false;
    } else {
        document.getElementById("msg").innerHTML = "";
    }
    if (!ptrn.test(frm)) {
        document.getElementById("msg").innerHTML = "Please Enter only Text no Digits are allow";
        return false;
    } else {
        document.getElementById("msg").innerHTML = "";
    }
}