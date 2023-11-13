#include <bits/stdc++.h>
using namespace std;
int main(){
    set<long long>st;
    string s;
    int n;
    while(cin>>s>>n){
        if(s=="insert"){
            st.insert(n);
        }else if(s=="exists"){
            if(st.end()==st.find(n)) 
                cout<<"false"<<endl;
            else cout<<"true"<<endl;
        }else if(s=="delete"){
            st.erase(n);
        } 
    } 
}