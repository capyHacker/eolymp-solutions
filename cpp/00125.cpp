#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,t1,t2,h,m,s;
    cin>>h>>m>>s;
    t1=h*3600+m*60+s;
    cin>>h>>m>>s;
    t2=h*3600+m*60+s;
    t=t2-t1;
    cout<<t/3600<<" ";
    t%=3600;
    cout<<t/60<<" ";
    t%=60;
    cout<<t;
}