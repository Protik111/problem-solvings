//number 1 :- feet to mile conversion

function feetToMile(feet){
    var result = feet / 5280;
    return result;
}
const mile = feetToMile(1000);
console.log("The Mile is : ",mile);

//number 2 :- Wood calculation

function woodCalculator(chair, table, bed){
    var woodAmount1 = chair * 1;
    var woodAmount2 = table * 3;
    var woodAmount3 = bed * 5;
    var totalWoodAmount = woodAmount1 + woodAmount2 + woodAmount3;
    return totalWoodAmount;
}
var totalWood = woodCalculator(4,3,2);
console.log("Total wood numbers are :",totalWood);

//number 3 :- Brick calculation

function brickCalculator(floors){
    if(floors>0){
        if(floors<=10){
            var totalFeet  = floors*15;
            var totalBricks = totalFeet*1000;
            return totalBricks;
        }else if(floors>10 && floors<=20){
            var floor12 = floors - 10;
            var floor15 = floors - floor12;
            var totalFeet = floor15*15 + floor12*12;
            var totalBricks = totalFeet *1000;
            return totalBricks;
        }else{
            var floor10 = floors - 20;
            var totalFeet = (10*15) + (10*12) + (floor10*10);
            var totalBricks = totalFeet * 1000;
            return totalBricks;
        }
    }else{
        return "Floors cannot be zero or negative";
    }
}

var brickResult = brickCalculator(35);
console.log("Total bricks are :",brickResult);

// number 4 :- Find tiny friend

function tinyFriend(str){
    var maxName = str[0];
   for(var i = 0; i<str.length; i++)
       var nameLength = str[i].length;
       if(nameLength < maxName){
           nameLength = maxName;
       }
       return nameLength;
    
}

var tinyName = tinyFriend(['Protik', 'Rahman', 'Robi']);
console.log("Small Name's total characters are : ",tinyName);