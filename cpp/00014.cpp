#include<bits/stdc++.h>
using namespace std;
bool sade(int a){
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0){
            return true;
            break;
        }
    }
    return false;
}
int main(){
    int n,a,b;
    scanf("%d%d" , &n , &a); // cin>>n>>a;
    b=a;
    for(int i=0;i<n-1;i++){
        a++;
        if(sade(a)==0){
            printf("%d" , a-b-1);
            return 0;
        }
    }
    printf("-1");
}
