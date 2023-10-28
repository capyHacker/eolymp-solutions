#include<bits/stdc++.h>
using namespace std; 
long long n,pd=0; 
int main(){
    cin>>n; 
    string s=to_string(n); 
    reverse(s.begin(),s.end()); 
    while(n!=stol(s)){ 
        pd++; 
        n=n+stol(s); 
        s=to_string(n); 
        reverse(s.begin(),s.end()); 
    } 
    cout<<pd; 
}