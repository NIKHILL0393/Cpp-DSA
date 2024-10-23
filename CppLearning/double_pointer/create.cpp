#include<iostream>
using namespace std ;
int main(){
    int i = 10;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout<<" double pointer "<<endl;
    cout<<"print ptr "<<ptr<<endl;;
    cout<<"address of ptr "<<&ptr<<endl;

    cout<<*ptr2<<endl;

    cout<<i<<endl;
    cout<<*ptr<<endl;
    cout<<**ptr2<<endl;
    
    return 0;
}