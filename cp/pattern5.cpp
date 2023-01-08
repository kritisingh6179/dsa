#include<iostream>
using namespace std;

int main()
{
    int n;
cout<<"enter number ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=n;j>=1;j--){
        cout<<j;
}
cout<<endl;
}
cout<<endl;

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<n-j+1;
}
cout<<endl;
}
    return 0;
}