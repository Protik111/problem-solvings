var speech = "I am a good person. I don't snore at night";

var count = 0;
for(i=0; i<speech.length; i++){
    var word = speech[i];
    if(word == " "){
        count++;
    }
}
console.log(count);