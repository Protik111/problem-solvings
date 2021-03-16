#include <iostream>
using namespace std;
int main()
{
    int T, i, n1, n2, n3, temp1, temp2;
    cin>> T;
    for(i=1; i<=T; i++){
        cin >> n1 >> n2 >> n3;
        if(n1<=1000 && n2<=1000 && n3<=1000){
            if(n1!=n2 && n2!=n3)
            {
                if(n1>n2)
                {
                    temp1 = n2;
                    n2 = n1;
                    n1 = temp1;
                }
                if(n2>n3)
                {
                    temp2 = n3;
                    n3 = n2;
                    n2 = temp2;
                }

            }
        }
        cout<<"case " << i <<": " << n1 << n2 << n3 << "\n";
    }

}
