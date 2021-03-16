#include <iostream>
using namespace std;
int main()
{
    int i,j,T,N;
    cin>>T;
    //for(T=1;T<=25;T++)
    while(T<=25)
    {
        cin>>N;
        for(i=1;i<=N;i++){
            for(j=1;j<=N;j++){
                cout<<"*";
            }
            cout<<"\n";
        }
     T++;

    }
    return 0;
}
