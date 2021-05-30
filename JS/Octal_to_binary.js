function octalToBinary(octNum){
    let i = 0;
    let binary = "";
    while(octNum[i]){
        switch(octNum[i]){
            case '0' :
                binary += "000";
                break;
            case '1' :
                binary += "001";
                break;
            case '2' :
                binary += "010";
                break;
            case '3' :
                binary += "011";
                break;
            case '4' :
                binary += "100";
                break;
            case '5' :
                binary += "101";
                break;
            case '6' :
                binary += "110";
                break;
            case '7' :
                binary += "111";
                break;
            default :
                console.log("The number is invalid", octNum);
                break;
        }
        i++;
    }
    return binary;
}

const octnum = "654";
const convertFunction = octalToBinary(octnum);
console.log("Equivalent binary value = ", convertFunction);