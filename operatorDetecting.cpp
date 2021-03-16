#include <iostream>
using namespace std;
int main()
{
    char ch[10];
    cin>>ch;
    //cout<<ch<<"\n";
    switch(ch[0]){
        case '>' :
            if(ch[1] == '='){
                cout<<"Greater than or equal to"<<"\n";
                break;
            }
            cout<<"Greater than"<<"\n";
            break;
        case '<' :
            if(ch[1] == '='){
                cout<<"Less than or equal to"<<"\n";
                break;
            }
            cout<<"Less than"<<"\n";
            break;
        case '&' :
            if(ch[1] == '&'){
                cout<<"logical and operator"<<"\n";
                break;
            }
            cout<<"Bitwise and operator"<<"\n";
            break;
        case '=' :
            if(ch[1] == '='){
                cout<<"Equal to"<<"\n";
                break;
            }
            cout<<"assignment operator"<<"\n";
            break;
        case '|' :
            if(ch[1] == '|'){
                cout<<"Logical or"<<"\n";
                break;
            }
            cout<<"Bitwise or"<<"\n";
            break;
        case '!' :
            if(ch[1] == '='){
                cout<<"Not equal to"<<"\n";
                break;
            }
            cout<<"Bit not"<<"\n";
            break;
        case '+' :
            if(ch[1] == '-'){
                cout<<"This is not a operator"<<"\n";
                break;
            }
            cout<<"Addition operator"<<"\n";
            break;
        case '-' :
            cout<<"Subtraction operator"<<"\n";
            break;
        case '*' :
            cout<<"Multiplication operator"<<"\n";
            break;
        case '/' :
            cout<<"Division operator"<<"\n";
            break;
        case '^' :
            cout<<"Bitwise Exclusive  OR operator"<<"\n";
            break;
        case '+-' :
            cout<<"This is not a operator"<<"\n";
            break;
        default :
            cout <<"This is not a operator"<<"\n";
    }
}
