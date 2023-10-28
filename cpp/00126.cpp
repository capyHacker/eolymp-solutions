#include <bits/stdc++.h>
using namespace std;
int main(){
	long long a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e=d;
	f=1;
	while(e>a/b){
		e-=a/b;
		f++;
	}
	cout<<f<<' ';
	e=d;
	f=1;
	while(d>a/(b*c)){
		d-=a/(b*c);
		f++;
		if(f==c+1)
			f=1;
	}
	cout<<f;
}