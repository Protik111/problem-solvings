#include <iostream>
using namespace std;
int main()
{
    int i, j, n, T, zeros;
    long long int factorial;
    cin>>T;
    for(i=1; i<=T; i++){
        cin>>n;
        factorial = 1;
        for(j=1; j<=n; j++){
            factorial = factorial * j;
        }
        if(factorial>1){
            zeros = 0;
            while(factorial%10 == 0){
                factorial = factorial/10;
                zeros++;
            }
            cout<<zeros<<"\n";
        }
    }
    return 0;
}
