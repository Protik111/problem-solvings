var marks = [20,35,50,84,78,92];
var max = marks[0];
for(i=0; i<= marks.length; i++){
    var newMax = marks[i];
    if(newMax>max){
        max = newMax;
}
}
console.log("Highest Mark is :", max);