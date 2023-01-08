#include<iostream>
using namespace std;
int linear(int x,int arr[],int key){
for(int i=0;i<x;i++){
    if(arr[i]==key){
        return i;
    }
    else return 0;
}
}
int main()
{

    int n;
   
cout<<"enter number ";
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int k;
cin>>k;
int y=linear(n,a,k);
if(y==0){
    cout<<"not found";
}
else{
    cout<<"found";
}
return 0;
}