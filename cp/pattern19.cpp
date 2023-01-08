#include<iostream>
using namespace std;

int main()
{
    int n;
     char ch='A';
cout<<"enter number ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      
        cout<<char(ch)<<" ";
        ch=ch+1;
    
}
cout<<endl;

}
    return 0;
}