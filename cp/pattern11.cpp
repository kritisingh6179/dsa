#include<iostream>
using namespace std;

int main()
{
    int n;
cout<<"enter number ";
cin>>n;
for(int i=1;i<=n;i++){
    int x=i;
    for(int j=1;j<=i;j++){
        //cout<<i-j+1;
        cout<<x<<" ";//i-j+1
        x--;
}
cout<<endl;
}
    return 0;
}