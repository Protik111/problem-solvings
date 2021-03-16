#include <iostream>
using namespace std;
int main()
{
    int i, T, n;
    cin>> T;
    for(i=0; i<T; i++){
        cin>> n;
        if(n%2==0){
            cout<<"even"<<"\n";
        }else
        {
            cout<<"odd"<<"\n";
        }
    }
    return 0;
}
