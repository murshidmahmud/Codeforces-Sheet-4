#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string S,T;
    int t;
    cin>>t;

    while(t--){
        cin>>S >>T;

        int x = S.size();
        int y = T.size();

        int z = max(x,y);

        for(int i=0; i<z; i++){
            if(i<x) cout<<S[i];
            if(i<y) cout<<T[i];
        }
        cout<<endl;
    }
    return 0;
}