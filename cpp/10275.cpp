#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    long long a,x,b; 
    cin>>a>>x>>b; 
    if(a+x==b || a+b==x or x+b==a) 
    cout<<"Yes"; 
    else 
    cout<<"No"; 
}