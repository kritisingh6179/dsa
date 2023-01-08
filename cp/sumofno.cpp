 #include <iostream>
 using namespace std;
int main() {
int n;
cout<<"enter n ";
cin>>n;
int sum=0;
while(n>=0){
    
    cout<<n<<endl;
    sum=sum+n;
    n--;
}
cout<<sum;
return 0;
}