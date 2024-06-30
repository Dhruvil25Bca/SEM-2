function validate() {
    //function validation//
    var fullname = document.getElementById("fname").value;
    if (fullname == "") {
        document.getElementById("msg1").innerHTML = "Please Enter First Name";
        document.getElementById("fname").style.Color = "red";
        document.getElementById("msg1").style.fontSize = "20px";
        document.getElementById("fname").focus();
        return false;
    } else {
        document.getElementById("msg1").innerHTML = "done";
    }
    //pincode validation
    var pin = document.getElementById("pin").value;
    var pinpattern = /[0-9]{6}/;
    if (!pinpattern.test(pin)) {
        document.getElementById("msgpin").innerHTML =
            "Please Enter Valid pincode no";
        return false;
    } else {
        document.getElementById("msgpin").innerHTML = "done";
    }
    //last name validation//
    var lnm = document.getElementById("lname").value;
    if (lnm == "") {
        document.getElementById("msglnm").innerHTML = "Please Enter Last Name";
        return false;
    } else {
        document.getElementById("msglnm").innerHTML = "done";
    }
    //Contact Validation//
    var pattern = /[0-9]{3}[0-9]{6}$/;
    var contactno = document.getElementById("cno").value;
    if (!pattern.test(contactno)) {
        document.getElementById("msg2").innerHTML = "Please Enter Proper Contactno";
        document.getElementById("cno").style.Color = "red";
        document.getElementById("cno").focus();
        return false;
    } else {
        document.getElementById("msg2").innerHTML = "done";
    }
    //Email Validation
    var emailpattern = /^[a-zA-Z0-9_]+@[a-z]+\.[a-z]{2,4}$/;
    var emailID = document.getElementById("email").value;
    if (!emailpattern.test(emailID)) {
        document.getElementById("msg3").innerHTML = "Please Enter Correct email ID";
        document.getElementById("email").style.Color = "green";
        document.getElementById("email").focus();
        return false;
    } else {
        document.getElementById("msg3").innerHTML = "done";
    }
    //radio validation
    var gr = document.getElementsByName("g");
    var lan = gr.length;
    var cnt = 0;
    var i;
    for (i = 0; i < lan; i++) {
        if (gr[i].checked == true) {
            document.getElementById("msg4").innerHTML = "done";
            cnt = 1;
            break;
        }
    }
    if (cnt == 0) {
        document.getElementById("msg4").innerHTML =
            "Please select atleast one gender";
        return false;
    } else {
        document.getElementById("msg4").innerHTML = "done";
    }
    //checkbox validation
    var ch = document.getElementsByName("c");
    var len = ch.length;
    var cnt = 0;
    for (i = 0; i < len; i++) {
        if (ch[i].checked == true) {
            document.getElementById("msg5").innerHTML = "";
            cnt = 1;
            break;
        }
    }
    if (cnt == 0) {
        document.getElementById("msg5").innerHTML =
            "Please select atleast one option";
        return false;
    } else {
        document.getElementById("msg5").innerHTML = "done";
    }
    // combobox validation
    var sel = document.getElementById("v").value;
    if (sel == "") {
        document.getElementById("msg6").innerHTML =
            "Please select atleast one option";
        return false;
    } else {
        document.getElementById("msg6").innerHTML = "done";
    }
    var db = document.getElementById("db").value;
    var date = new Date();
    var dd = date.getDate();
    var mm = date.getMonth() + 1;
    var yy = date.getFullYear();
    if (dd <= 9) {
        dd = "0" + dd;
    }
    if (mm <= 9) {
        mm = "0" + mm;
    }
    var db2 = yy + "_" + mm + "_" + dd;
    if (db == "") {
        document.getElementById("msg7").innerHTML = "Please Enter Date of birth";
        document.getElementById("db").style.Color = "red";
        document.getElementById("msg7").style.fontSize = "20px";
        document.getElementById("db").focus();
        return false;
    }
    if (db > db2) {
        document.getElementById("msg7").innerHTML =
            "Date of Birth is not greater then Current Date";
        document.getElementById("db").style.Color = "red";
        document.getElementById("msg7").style.fontSize = "20px";
        document.getElementById("db").focus();
        return false;
    } else {
        document.getElementById("msg7").innerHTML = "done";
    }
    //age validation
    var age = document.getElementById("rg").value;
    if (age == 0) {
        document.getElementById("msg8").innerHTML =
            "Your Age must be Greater then Zero";
        return false;
    } else {
        document.getElementById("msg8").innerHTML = "done";
    }
}

function getval() {
    var age = document.getElementById("rg").value;
    document.getElementById("ans").innerHTML = age;
}

function reset() {
    window.open("practical 06 js(simp).html");
}