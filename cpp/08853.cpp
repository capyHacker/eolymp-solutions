#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x,y,n;
    cin>>n;
    x=n/1000%10;
    y=n/10%10;
    cout<<x*10+y;
}