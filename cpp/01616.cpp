#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k=0;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0)
            k++;
    }
    if(k==0){
        cout<<"Yes";
        return 0;
    }
    cout<<"No";
}