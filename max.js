var num1 = 40;
var num2 = 20;
var num3 = 30;
if(num1 > num2){
    if(num1 > num3){
        var max = num1;
    }else{
        var max = num3;
    }
    
}else{
    if(num2 > num3){
        var max = num2;
    }else{
        var max = num3;
    }
}
console.log("The biggest number is : ", max);

//by built in function

var maxResult = Math.max(num1, num2, num3);
console.log("Max is : ",maxResult);