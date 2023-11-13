#include <iostream>
using namespace std;
int main(){
    double x,y,a,b;
    cin>>x;
    a=(x*x+3*x-4)/(2*x-3);
    b=(x+2)/(x*x-5*x+7);
    y=a-b;
    cout<<y;
}