#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;

    m[1]="hello";
    m[2]="my";
    m[10]="world";

    m.insert({4,"random"});

    cout<<"before.erase"<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"find 10-> "<<m.count(10)<<endl;

    m.erase(10);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it =m.find(2);
    for(auto i=it;i!=m.end();i++)
    cout<<(*i).first<<endl;
}