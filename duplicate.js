var serial = [2, 5, 8, 7, 5, 8, 9, 1];
var NonDuplicateSerial = [];
for(i=0; i<serial.length; i++){
    var element = serial[i];
    var index = NonDuplicateSerial.indexOf(element);
    if(index == -1){
       NonDuplicateSerial.push(element);
    }
}
console.log(NonDuplicateSerial);