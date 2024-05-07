#include<iostream>
#include<string>
using namespace std;
 int main(){

    string letter[3][3]={
        {"a","b","c"},
        {"f","e","d"},
        {"g","h","i"}
    };
    letter[2][2]="z";
    cout<<letter[2][2];
    return 0;
 }
 