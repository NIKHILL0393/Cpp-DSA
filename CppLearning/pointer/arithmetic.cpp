#include<iostream>
using namespace std;
int main(){
int num =5;
int a=num;

cout<<" a before "<< num <<endl;
a++;
cout<<"a after "<< num <<endl;

int *p=&num;
cout<<"before "<<num<<endl;
(*p)++;
cout<<"after "<<num<<endl;

int i=5;
int *t=&i;

*t=*t+1;

cout<<*t<<endl;
cout<<" before  "<< t <<endl;

t=t+1;
cout<<"after t "<<t<<endl;

return 0;
}