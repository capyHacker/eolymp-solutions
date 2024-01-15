#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b and b==c)
        cout<<"equilateral";
    else if(a+b<=c or a+c<=b or b+c<=a)
        cout<<"invalid";
    else if(a==b or a==c or c==b)
        cout<<"isosceles";
    else if(a!=b and b!=c and c!=a)
        cout<<"versatile";
}