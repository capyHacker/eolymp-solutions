#include <iostream>
using namespace std;
int main(){
    double x,y,a,b;
    cin>>x>>y;
    a=((2*x)+y)/((x*x)-(x*y)+(4*(y*y)));
    b=((2*(x*x))-(x*y)+(y*y))/(x+(4*y));
    cout<<a+b;
}