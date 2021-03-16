// normal calculation :

var inch = 156;
var feet = inch/12;
console.log(feet);

// calculation by function

function inchToFeet(inch){
    var feet = inch/12;
    return feet;
}
var feet1 = inchToFeet(168);
console.log(feet1);

// calculation by loop

var inchList = [156, 168, 180, 192, 204];
for(i=0; i<inchList.length; i++){
    var Feet = inchList[i]/12;
    console.log(Feet);
}