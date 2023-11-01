#include <iostream>
using namespace std;
int main() {
    long long n,a,b,c,d,e;
    cin>>n;
    a=n/10000;
    b=n/1000%10;
    c=n/100%10;
    d=n/10%10;
    e=n%10;
    cout<<e<<d<<c<<b<<a;
    return 0;
}