#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,ans="";
    set<char>st;
    cin>>s;
    for(int i=0;i<s.size();i++){
        st.insert(s[i]);
        if(st.size()==4){
            ans+=s[i];
            st.clear();
        }
    }
    for(char c :"ACGT"){
        if(st.count(c)==0){
            ans+=c;
            break;
        }
    }
    cout<<ans<<endl;
}