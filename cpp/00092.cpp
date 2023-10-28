#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, p, x;
		cin>>n>>p;
		vector <int> a(p);
		for(int i=0; i<p; i++){
			cin>>x;
			a[i]=x;
		}
		sort(a.begin(), a.end(), greater<int>());
		int sum=0;
		for(int i=0; i<p; i++){
			if(n<=0) 
			break;
			sum+=a[i];
			n--;
		}
		cout<<sum<<endl;
	}
}