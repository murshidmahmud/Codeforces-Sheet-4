#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string a,b;
    cin>>a >>b;

    int x = a.length();
    int y = b.length();
    cout<<x <<" " <<y;

    cout<<endl;

    cout<<a+b <<endl;

    char p = a[0];
    a[0]=b[0];
    b[0]=p;
    
    cout<<a <<" " <<b <<endl;
    return 0;
}