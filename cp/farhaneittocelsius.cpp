#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter temperature in fahrenheit : ";
    cin>>n;
    int x;
    x=((n-32)*5)/9;
    cout<<x<<"C";

    return 0;
}