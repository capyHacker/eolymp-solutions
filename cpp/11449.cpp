#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    reverse(s2.begin(),s2.end());
    if(s2==s1){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";
}