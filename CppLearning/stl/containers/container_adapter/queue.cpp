#include<iostream>
#include<queue>
using namespace std ;
int main(){
    queue<string>q;

    q.push("hello");
    q.push("my ");
    q.push("world");

    cout<<"first word "<<q.front()<<endl;
    q.pop();
    cout<<"first word "<<q.front()<<endl;

    cout<<"size after pop "<<q.size()<<endl;
}
