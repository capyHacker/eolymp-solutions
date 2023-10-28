#include <bits/stdc++.h>
using namespace std;
int main() {
    double n,x,y,z;
    cin>>x>>y>>z;
    n=1/(1/x+1/y+1/z);
    cout<<fixed<<setprecision(2)<<n;
}