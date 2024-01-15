#include <iostream>
using namespace std;
int main() {
    long long a,b,c;
    cin>>a>>b>>c;
    if(a<0||b<0||c<0){
        if(a>0||b>0||c>0)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
        cout<<"NO";
}