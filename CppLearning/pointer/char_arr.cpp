#include<iostream>
using namespace std;
int main(){
    int arr[4] = {1,4,7,3};
    char ch[3] = "ab";

    cout<<arr<<endl;
    cout<<ch<<endl;

    char *c = &ch[0];
    //entire string
    cout<< c <<endl;

    char temp='z';
    char *p = &temp;
    cout<< p<<endl;
    return 0;
}