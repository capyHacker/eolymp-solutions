#include <iostream>
using namespace std;
int main() {
    long long n,x,y,z;
    cin>>n;
    x=n/100;
    y=n/10%10;
    z=n%10;
    cout<<y*100+x*10+z;

    return 0;
}