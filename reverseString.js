function reverseString(str){
    var reverse = "";
    for(i=0;i<str.length;i++){
        var newString = str[i];
        reverse = newString + reverse;
    }
    return reverse;
}
var statement = "Hello, this is protik";
var result = reverseString(statement);
console.log(result);