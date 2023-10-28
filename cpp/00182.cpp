#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y,a[10005],b[10005],saygac=0;
	vector<int>f;
	cin>>n>>x>>y;
	for(int i=0; i<n; i++) {
		cin>>a[i]>>b[i];
		saygac+= a[i];
		f.push_back(a[i]-b[i]);
	}
	if(x+y>n){
		cout<< -1;
		return 0;
	}
	sort(f.begin(), f.end());
	for(int i=0; i<y; i++){
		saygac-=f[i];
	}
	for(int i=y; i<n-x; i++){
		if(f[i]<0){
			saygac-=f[i];
		}
	}
	cout<<saygac;
}