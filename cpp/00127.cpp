#include <bits/stdc++.h>
using namespace std;
int main(){

    long long s,pul=1,pre=1,gun=1;
    cin>>s;
    while(pul < s){
        gun++;
        pul+=2*pre+gun;
        pre=2*pre+gun;
    }
    cout<<gun<<endl;
}