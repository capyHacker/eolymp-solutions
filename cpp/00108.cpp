#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,x,y;
    cin>>a>>b>>c;
    x=max(a,max(b,c));
    y=min(a,min(b,c));
    cout<<(a+b+c)-(x+y);
}