#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d,f,n;
    cin>>n;
    if(n%2==0 && n<0 && n%3==0)
        cout<<"NO";
    else if(n<0 && n%3==0 || n%2==0)
        cout<<"YES";
    else
        cout<<"NO";
}