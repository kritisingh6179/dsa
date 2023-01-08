 #include <iostream>
 using namespace std;
int main() {
char a;
cout<<"enter the character";
cin>>a;
 if(a>=65&&a<=90){
    cout<<"A is uppercase";
}
else if(a>=97&&a<=122){
    cout<<"A is lowercase";
}

else{
    cout<<"a is numeric";
}
return 0;
}