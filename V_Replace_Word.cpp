#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    getline(cin,s);

    
    string x="EGYPT";
    int pos;

    while((pos=s.find(x)) !=string::npos){
        s.replace(pos,x.length()," ");
    }
    cout<<s;

    return 0;
}