#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;

    long long sum =0;

    for(auto ch:s){
        sum +=(ch-'0');
    }

    cout<<sum;  
    return 0;
}