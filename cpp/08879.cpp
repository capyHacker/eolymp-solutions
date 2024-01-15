#include <bits/stdc++.h>
using namespace std;
int main(){ 
    long long a,b,c; 
    cin>>a>>b>>c; 
    if(a+b<c) 
        cout<<"No"; 
    if(a+b==c) 
        cout<<"No"; 
    if(a+c==b) 
        cout<<"No"; 
    if(b+c==a) 
        cout<<"No"; 
    if(b+c<a) 
        cout<<"No"; 
    if(a+c<b) 
        cout<<"No"; 
    if(a+b>c && a+c>b && b+c>a) 
        cout<<a+b+c; 
}