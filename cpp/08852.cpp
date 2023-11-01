#include <iostream>
using namespace std;
int main() {
    long long n,x,y,z;
    cin>>n;
    x=n/10000;
    y=n/100%10;
    z=n%10;
    cout<<x*100+y*10+z;

    return 0;
}