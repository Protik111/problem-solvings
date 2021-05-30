// let factorial = 1;
// for(i=1; i<=5; i++){
//     factorial =factorial*i;
//     console.log(factorial);
// }


//by function with for loop
// function factorial (f){
//     var factorial = 1;  //1 because it has to be multiplied.
//     for(i=1; i<=f; i++){
//         factorial = factorial*i;
        
//     }
//     return factorial;
    
// }
// const factorialResult = factorial(10);
// console.log(factorialResult);


// //by while loop
// var i=1;
// var factorial = 1;
// while(i<=10){
//     factorial = factorial*i;
//     i++;
// }
// console.log(factorial);

//by while loop with function

function factorial(f){
    var i = 1;
    var fact = 1; //will start multiply with this number
    while (i<=f){
        fact = fact * i;
        i++;
    }
    return fact;
}

const factResult = factorial(10);
console.log(factResult);


// N.B : all the procedure are iterative way to find factorial above