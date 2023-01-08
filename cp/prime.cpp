 #include <iostream>
 using namespace std;
int main() {
int x;
cout<<"enter number ";
cin>>x;
int a=0;
for(int i=2;i<=x;i++){
if(i%2==0){
    a++;
}
}
if(a<1){
    cout<<"non";
    }
else{
    cout<<"prime";
}
return 0;
}