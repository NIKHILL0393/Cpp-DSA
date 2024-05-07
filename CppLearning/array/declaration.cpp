#include<iostream>
#include<string>
using namespace std;
 int main(){
    string color[5];
    color[1]="red";
    color[2]="yellow";
    color[3]="green";
    color[4]="orange";
    for(int i=0;i<=4;i++){
        cout<< color[i] <<"\n";
    }
    return 0;
 }