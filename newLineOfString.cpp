#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str[100];
    //getline(cin, str);
    cin.get(str,100);
    //cout<< str<< "\n";
    for(int i=0; str[i] !='\0'; i++){
        if(str[i] == ' ')
        {
            str[i] = '\n';
        }
    }
    cout<<str<<"\n";
    return 0;
}
