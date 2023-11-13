#include <iostream>
using namespace std;
int main(){
    double x,y,a,b;
    cin>>x>>y;
    a=((x*x)-(2*x*y)+(4*(y*y)))/(x+5);
    b=((3*(x*x))-(y*y))/(y-7);
    cout<<a+b;
}