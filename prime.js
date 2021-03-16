var n = 5;
for(i=2; i<=n-1; i++){
    console.log(i, n % i);
    if(n % i == 0){
        console.log('Your number is not a prime number');
    }else{
        console.log('Your number is a prime number');
    }
}

//by function 

function isPrime(n){
    for(i=2;i<n;i++){
        if(n%i == 0){
            return 'alert Your Number is not a prime number';
        }else{
            return 'Your number is a prime number';
        }
    }
}

const primeNumber = isPrime(120);
console.log(primeNumber);
