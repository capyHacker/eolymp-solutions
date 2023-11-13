#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y,z,a,b;
	cin>>x>>y>>z;
	a=min(x,min(y,z));
	b=max(x,max(y,z));
	cout<<a<<" "<<(x+y+z)-(a+b)<<" "<<b;
}