#include<iostream>
#include<array>
using namespace std;
int main(){
int basic[3]={1,3,5};
array<int,5>a={1,3,5,8,9};
int size=a.size();

for(int i=0;i<size;i++){
   cout<<a[i]<<endl;
}
cout<<"element at 2nd index-> "<<a.at(2)<<endl;
cout<<"empty or not-> "<<a.empty()<<endl;
cout<<"first element-> "<<a.front()<<endl;
cout<<"last element-> "<<a.back()<<endl;
}