#include<iostream>
#include<vector>
using namespace std;
vector<int> revers(vector<int> v){
    int start=0;
    int end=v.size()-1;
    while(start<=end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}
void pri(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);
    vector<int> rev = revers(v);
    pri(rev);
 return 0;
}