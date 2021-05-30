var a = 5;
var b = 7;
console.log("Before swapping : a = ", a, "b = ",b);
var temp = a;
var a = b;
var b = temp;
console.log("after swapping : a = ", a, "b = ",b);

//by js language specification

var i = 10;
var j = 20;
console.log("values are : i = ", i, "j = ", j);
[i, j] = [j, i];
console.log("now the value are : i = ", i, "j = ", j);