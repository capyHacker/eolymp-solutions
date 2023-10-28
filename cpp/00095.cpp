#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    double t,a,n,m;
    cout.precision(2);
    for(int i=0;i<x;i++){
        cin>>t>>a>>n>>m;
        if(t==0 and n==0)
            cout<<fixed<<0.00<<endl;
        else if(t==0 and n!=0)
            cout<<fixed<<m<<endl;
        else if(t!=0 and n==0)
            cout<<fixed<<a<<endl;
        else
            cout<<fixed<<(t*a+n*m)/(t+n)<<endl;
    }
}