#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x,y,z,n;
    cin>>n;
    x=n/100;
    y=n/10%10;
    z=n%10;
    cout<<y*100+z*10+x;
    return 0;
}