#include<iostream>
#include<string>
using namespace std;
int main(){
    int number[4]={1,3,4,2};
    for(int i=0;i<sizeof(number)/sizeof(int);i++){
        cout<<number[i]<<"\n";
    }
}