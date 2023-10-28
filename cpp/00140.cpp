#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n,d1,d2;
	cin>>n;
    ll k=2;
	ll d=2;
	ll s=2;
    for(ll i=2;i<=n;i++) {
		k=k*2;
		d1=d+k;
		d2=d1/2;
		d= d1-d2;
		s=k-d2; 
	}
    cout<<s<<" "<<d;
}