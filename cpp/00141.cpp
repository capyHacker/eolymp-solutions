#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
   int a,b,sum=0;
   cin>>a>>b;
   string k;
   vector<int>kek;
    for(int x=a;x<=b;x++){
      k=to_string(x);
      for(int i=0;i<k.length();i++){
         sum+=(int(k[i])-48);
      }
      kek.push_back(sum);
      sum=0;
   }
   sort(kek.begin(),kek.end());
   cout<<count(kek.begin(),kek.end(),kek[0]);
}