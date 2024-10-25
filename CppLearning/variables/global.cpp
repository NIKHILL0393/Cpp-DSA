#include<iostream>
using namespace std;

int ans=2;

void a(int i){
    cout<<ans<<" in a "<<endl;
    cout<<i<<endl;
}

void b(int& i){
    cout<<ans<<"in b "<<endl;
    cout<<i<<endl;
}
int main(){
    cout<< ans<<"in main "<<endl;
    int i =10;
    a(i);
    b(i);

    return 0;
}