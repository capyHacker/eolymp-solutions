#include <bits/stdc++.h>
using namespace std;
string str;
int length,n=1,mas[1024],lenmas=1,sum=1,qaliq;
int main(){
	cin>>str;
	length=str.length();
	mas[0]=2;
	while(sum<length){
		qaliq=0;
		for(int i=0; i<lenmas; i++){
			qaliq+=mas[i]*2;
			mas[i]=qaliq%10;
			qaliq/=10;
		}
		while(qaliq){
			mas[(lenmas++)]=qaliq%10;
			qaliq/=10;
		}
		n++;
		sum+=lenmas;
	}
	cout<<n<<endl;
}