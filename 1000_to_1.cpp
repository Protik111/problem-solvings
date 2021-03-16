#include <iostream>
using namespace std;
int main()
{
    int i, j=0;
    for(i=1000; i>=1; i--){
        j++;
        cout<<i<<"\t";
        if(j%5==0){
            cout<<"\n";
        }
    }
    return 0;
}
