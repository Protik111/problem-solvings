const year = 2022;
let remainder = year % 4;
if(remainder==0){
    console.log('Your year is a leap year');
}else{
    console.log('Your year is not leap year');
}

//second way
function isLeapYear(year){
    if (year % 400 == 0){
        return "it's a leap year.";
    }else if(year % 4 == 0 && year % 100 != 0){
        return "It's a leap year.";
    }else{
        return "It's not a leap year.";
    }
}

const leapYear = isLeapYear(2020);
console.log(leapYear);