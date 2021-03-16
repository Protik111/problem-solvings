#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int T, N, i, squaredValue;
    cin>>T;
    for(i=1; i<=T; i++){
            cin>>N;
            squaredValue = sqrt(N);
            if(squaredValue*squaredValue == N)
            {
                cout<<"Yes"<<"\n";
            }else
            {
                cout<<"No"<<"\n";
            }
    }
    return 0;
}
