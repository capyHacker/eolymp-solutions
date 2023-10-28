#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k=0;
    cin>>n;
    if(n>=500){
        k+=n/500;
        n%=500;
    }
    if(n>=200){
        k+=n/200;
        n%=200;
    }
    if(n>=100){
        k+=n/100;
        n%=100;
    }
    if(n>=50){
        k+=n/50;
        n%=50;
    }
    if(n>=20){
        k+=n/20;
        n%=20;
    }
    if(n>=10){
        k+=n/10;
        n%=10;
    }
    if(n==0){
        cout<<k;
        return 0;
    }
    cout<<-1;
}