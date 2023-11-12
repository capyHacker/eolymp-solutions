#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	if(x>0 and y>0)
		cout<<1;
	else if(x<0 and y<0){
	    if((abs(x)-abs(y))%2==0)
	        cout<<-1;
	    else cout<<1;
	} 
	else 
		cout<<0;
}