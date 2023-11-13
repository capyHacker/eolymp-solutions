#include <iostream>
using namespace std;
int main(){
    double x,y,a,b;
    cin>>x;
    a=((x*x)+4)/2;
    b=3/(x+7);
    y=x-a+(x*x*x)-b;
    cout<<y;
}