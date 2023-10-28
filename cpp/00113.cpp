#include <iostream>
using namespace std;
long long n,m,k,i; 
long long a[12];
int main(){ 
    cin>>n;
    m=0;
    for(i=1;i<=n;i++){ 
        cin >> k; 
        a[k]++;
        if(a[k] > m) m = a[k];
    }
    cout<<n-m<<endl;
}