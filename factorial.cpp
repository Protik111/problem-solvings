#include <iostream>
using namespace std;
int main()
{
    int i, j, T, n;
    long long int factorial;
    cin >> T;
    for(i=1; i<=T; i++){
        factorial = 1;
        cin >> n;
        for(j=1; j<=n; j++){
            factorial = factorial * j;
        }
        cout <<factorial <<"\n";
    }
    return 0;
}
