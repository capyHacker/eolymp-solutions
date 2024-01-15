#include <bits/stdc++.h>
using namespace std; 
int main () { 
    int n,x,y,z;
    cin>>n;
    x=n/100;
    y=n/10%10;
    z=n%10;
    if(x!=y and x!=z and y!=z)
        cout<<"YES";
    else
        cout<<"NO";
    
}