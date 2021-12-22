// Probelm 1
function randomNumberGenerator(num1, num2) {
    const number = Math.floor(Math.random() * (num2 - num1 + 1)) + num1;
    console.log(number);
}

randomNumberGenerator(5, 50);


//Problem 2 & 3 
function orderRollNumbers(rollOfStudents) {
    if (!rollOfStudents.some(isNaN)) {
        return rollOfStudents.sort(function (a, b) { return a - b; });
    }
    return rollOfStudents.sort();
}

const rolls = [5, 6, 1, 10, 2, 9, 3, 4];
const names = ["Protik", "Rafiur", "Abdur"];
const orderedRoll = orderRollNumbers(rolls);
const orderedNames = orderRollNumbers(names);
console.log(orderedRoll, orderedNames);

//Problem 4
function checkLeapYear(year) {
    if (year % 400 === 0) {
        console.log(year, " is leap year.");
    } else if (year % 100 === 0) {
        console.log(year, " is leap year.");
    } else if (year % 4 === 0) {
        console.log(year, " is leap year.");
    } else {
        console.log(year, 'is not leap year.');
    }
}

checkLeapYear(2020);
checkLeapYear(2021);

//Problem 5
function findVowel(sentence) {
    const strSize = sentence.length;
    let counts = 0;

    for (let i = 0; i < strSize; i++) {
        if (sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u') {
            counts++;
        }
    }
    console.log('Total number of vowel', counts);
}

const sentence = "Hello This is Protik And Finding total counts";
findVowel(sentence);

//Problem 6
function extractDuplicate(ages) {
    const totalAges = ages.length;
    const duplicates = [];
    let index = 0;
    let initial = 1;

    for (let i = 0; i < totalAges; i++) {
        for (j = initial; j < totalAges; j++) {
            if (ages[i] == ages[j]) {
                duplicates.push(ages[i]);
                index++;
                break;
            }
            initial++;
        }
    }
    console.log(duplicates);
}

const ages = [23, 24, 25, 24, 23, 28, 27, 24];
extractDuplicate(ages);

//Problem Sovling 5 in filter method
const num = [1, 1, 1, 10, 10, 10, 5, 9, 7, 7, 10];
const result = num.filter((value, index, arr) => {
  return arr.indexOf(value) === index && arr.lastIndexOf(value) !== index;
});

console.log(result);
