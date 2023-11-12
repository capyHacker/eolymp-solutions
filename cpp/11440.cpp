#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(a.size()>b.size())
        cout<<a<<" > "<<b;
    else if(a.size()<b.size())
        cout<<a<<" < "<<b;
    else if(a.size()==b.size()){
        if(a>b) cout<<a<<" > "<<b;
        else if(a<b) cout<<a<<" < "<<b;
        else cout<<a<<" == "<<b;
    }
    
}