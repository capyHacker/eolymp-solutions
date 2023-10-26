#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    bool ans=true;
    if (n==0 || n==1)
        ans=false;
    for(int i=2;i<=n/2;i++){
		if(n%i==0){
	    	ans=false;
	    	break;
		}
	}
    return ans;
}
int main(){
    int a,b;
    int sum=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(prime(i)){
	    	string n=to_string(i);
	    	int c=n.size();
	    	string g;
	    	for (int j=c-1;j>=0;j--)
	    	    g+=n[j];
	    	int k=stoi(g);
	    	if(prime(k))
            	sum += 1;
		}
	}
	cout<<sum;
}