#include<iostream>
using namespace std;
void update1(int n){
    n++;
}
void update2(int &n){
    n++;
}
int main(){
    int i =10;
    int &j=i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    int n=5;
    cout<<"before "<<n<<endl;
    update2(n);
    cout<<"after "<<n<<endl;
    
 
    return 0;

}