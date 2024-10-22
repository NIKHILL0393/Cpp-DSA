#include<iostream>
using namespace std ;
int main(){;

int arr[20]={5,7,3,8};
// address
cout<<"->"<<&arr[0]<<endl;
cout<<&arr<<endl;
cout<<arr<<endl;

int *p=&arr[0];
cout<<" ->"<<p<<endl;
cout<<*p<<endl;
cout<<&p<<endl;

cout<<"adddress of first memory block is "<< arr<<endl;
cout<< arr[0]<<endl;
cout<<"address of first memory block is "<< &arr[0] <<endl;

cout<<"5th "<<*arr<<endl;
cout<<"6th "<<*arr +1<<endl;
cout<<"7th "<<*(arr + 1)<<endl;
cout<<"8th "<<*(arr) + 1<<endl;
cout<<"9th "<<arr[3]<<endl;

int i=2;
cout<<i[arr]<<endl;

return 0;
}