#include <iostream>
using namespace std;
int main() {
    int n,x,y,z;
    cin>>n;
    x=n/100;
    y=n/10%10;
    z=n%10;
    cout<<z*100+y*10+x;
    return 0;
}