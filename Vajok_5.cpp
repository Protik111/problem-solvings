#include <iostream>
using namespace std;
int main()
{
    int T, i, j, N;
    cin>>T;
    for(T=1;T<=10;T++){
        cin>>N;
        cout<<"Case "<<T <<" :";
        for(j=1;j<=N;j++){
            if(N%j==0){
                cout<<j<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
