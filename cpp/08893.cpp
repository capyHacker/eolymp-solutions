#include <bits/stdc++.h>
using namespace std; 
int main (){ 
    int n; 
    cin>>n; 
    if(n%6==0 && abs(n)<100 && 9<abs(n))
        cout<<"YES"; 
    else  
        cout<<"NO";  
    return 0; 
}