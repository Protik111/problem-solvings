#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i, j, T, counts;
    counts = 0;
    char sn[200];
    cin.get(sn, 200);
    //int len = strlen(c);
    char c[2];
    cin>>T;
    for(i=1; i<=T; i++){
        cin>>c;
        for(j=0; j<strlen(sn); j++){
            if(sn[j]==c[0])
            {
                counts++;
            }
        }
        cout<<"Occurrence of "<< c<<" in " <<sn<<" = "<<counts<<"\n";
        if(counts == 0)
        {
            cout<<c<<" is not present"<<"\n";
        }
        counts = 0;
    }
    return 0;
}
