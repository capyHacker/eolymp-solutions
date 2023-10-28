#include <bits/stdc++.h>
using namespace std;
int main(){ 
	int n,t,z=0; 
	cin>>n; 
	double sum=0,p,k; 
	for(int i=n;i>=1;i--) { 
		p=i; 
		k=1/p; 
		sum+=k; 
		t=i; 
		if(sum>0.5){ 
			break; 
		}
	} 
	cout<<t; 
	return z; 
}
