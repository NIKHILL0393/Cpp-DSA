#include<iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 2;
    int i,n;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(i=1;i<=n;i++) {
        int c=a+b;
        cout<<c <<" ";
        a=b;
        b=c;
    }   
}