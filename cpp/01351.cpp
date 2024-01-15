#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,maxi=0;
    cin>>n;
    n=abs(n);
    while(n!=0){
        maxi=max(maxi,n%10);
        n/=10;
    }
    cout<<maxi;
}