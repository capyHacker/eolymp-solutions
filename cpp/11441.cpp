#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,k;
    getline(cin,s);
    n=stoi(s);
    cout<<n<<endl;
    for(int i=0;i<s.size();i++)
        if(s[i]=='-') k=i+1;
    if(s[k]=='A'){
        cout<<'A'<<endl;
        k+=2;
    }else{
        cout<<"BSM"<<endl;
        k+=4;
    }
    for(int i=k;i<s.size();i++)
        cout<<s[i];
}