#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i=0,ans=0;
    cin>>n;
    while(n!=0){
        int bit = n&1;
        ans=(bit * pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
    return 0;
}