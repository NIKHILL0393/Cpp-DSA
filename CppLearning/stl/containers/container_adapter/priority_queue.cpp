#include<iostream>
#include<queue>

using namespace std;
int main(){
    // max heap
    priority_queue<int>max;
    //min heap
    priority_queue<int,vector<int>,greater<int> >min;

    max.push(1);
    max.push(3);
    max.push(0);

    cout<<"size->"<<max.size()<<endl;
    int n=max.size();
 
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;
    
    cout<<"empty or not ->"<<max.empty()<<endl;
     
}