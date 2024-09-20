#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string>s;

    s.push("hello");
    s.push("my");
    s.push("world");
    cout<<"top word -> "<<s.top()<<endl;

    s.pop();
    cout<<"top word -> "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

    cout<<"empty or not "<<s.empty()<<endl;


}