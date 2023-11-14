#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	x=n%86400;
	cout<<n/86400<<" "<<x/3600<<" "<<x%3600/60<<" "<<x%3600%60;
}