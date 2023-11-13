#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n/1440+1<<" ";
    n%=1440;
    cout<<n/60<<" ";
    n%=60;
    cout<<n;
}