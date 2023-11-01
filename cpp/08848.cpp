#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,x,y,z,a;
    cin>>n;
    x=n%10;
    y=n/10%10;
    z=n/100%10;
    a=n/1000;
    cout<<a*1000+y*100+z*10+x;

    return 0;
}