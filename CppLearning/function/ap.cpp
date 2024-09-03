#include<iostream>
using namespace std;
int nth_term(int n){
    return(3*n + 7);
}
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    cout<<"nth term of AP is : "<<nth_term(n)<<endl;
    return 0;
}