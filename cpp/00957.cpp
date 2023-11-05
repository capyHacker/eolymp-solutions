#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x,y,z;
    double a;
    cin>>n;
    x=n/100;
    y=n/10%10;
    z=n%10;
    a=x+y+z;
    cout<<sqrt(a);
}