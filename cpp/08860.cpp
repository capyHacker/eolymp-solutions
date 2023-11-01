#include <iostream>
using namespace std;
int main() {
    int n,x,y,z;
    cin>>n;
    x=n/100;
    y=n/10%10;
    z=n%10;
    cout<<2*(x+y+z)+200*(x+y+z)+20*(x+y+z);
    return 0;
}