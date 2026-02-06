#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;

    int x[26]={0};

    char s;
    for(int i=0; i<n; i++){
        cin>>s;
        x[s-'a']++;
    }

    for(int i=0; i<26; i++){
        while(x[i]--){
            cout<<char(i+'a');
        }
    }
    return 0;


    // long long n;
    // cin>>n;

    // string s;
    // cin>>s;

    // sort(s.begin(),s.end());

    // for(auto &x:s){
    //     cout<<x;
    // }
}