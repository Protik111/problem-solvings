#include <iostream>
using namespace std;
int main()
{
    int i, j, T, N, Result, Remainder_LSB, Sum, ResultOfRemainer;
    cin >> T;
    for(i=0; i<T; i++){
    cin >> N;
    if(N>=10000)
    {
        Remainder_LSB = N % 10;
        for(j=0; j<=5; j++)
        {
            ResultOfRemainer = N % 10;
            Result = N / 10;
            N = Result;
            if(Result == 0)
                {
                    break;

                }
        }
        Sum = Remainder_LSB + ResultOfRemainer;
        cout<< "Sum : " << Sum<< "\n";
    }
}
return 0;
}
