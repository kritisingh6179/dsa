#include<iostream>
using namespace std;

int main()
{
    int n;
   
cout<<"enter number ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        char ch='A';
        cout<<char(ch+j-1)<<" ";
    
}
cout<<endl;
}
    return 0;
}