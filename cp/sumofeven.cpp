 #include <iostream>
 using namespace std;
int main() {
int x;
cout<<"enter number ";
cin>>x;
int sum=0;
int i=1;
while(i<=x){
    if((i%2)==0){
        sum=sum+i;
        i++;
    }
else{
    i++;
}
}
cout<<sum;
return 0;
}