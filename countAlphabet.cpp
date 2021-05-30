//#include <iostream>
//#include <cstring>
// This program gives wrong output
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i, j, T;
    int count[26];
    char ch[200];
    cin.get(ch, 200);
    cin>> T;
    for(i=1; i<=T; i++){
        if(strlen(ch)<=1000)
        {
            for(j=0; j<strlen(ch); j++){
                if(ch[j] >= 'a' && ch[j] <= 'z')
                {
                    count[ch[j] - 'a']++;
                }
            }
            for(j=0; j<26; j++){
                if(count[j] != 0){
                    //cout<< 'a'+ j<<"="<<counts[j]<<"\n";
                    printf("'%c' = %d\n", 'a'+j, count[j]);
                    }
                }
        }else{
            cout<<"invalid"<<"\n";
        }
    }
    return 0;
}
