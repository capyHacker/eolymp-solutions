#include <iostream>
using namespace std;
int main(){ 
	int a,b,c,y,x; 
	cin>>a>>b>>c>>y>>x;
	if((a<=y && b<=x)||(a<=x && b<=y)||(a<=y && c<=x)||(a<=x && c<=y)||(b<=y && c<=x)||(b<=x && c<=y)) 
		cout<<"YES"; 
	else 
		cout<<"NO"; 
}