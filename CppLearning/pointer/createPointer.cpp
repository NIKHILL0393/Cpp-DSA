#include <iostream>
#include <string>
using namespace std;

int main() {
 int num=10;

 cout<<num<<endl;

 cout<<"address of num is "<< &num <<endl;
  
  int *ptr=&num;

  cout<<"value is : "<<*ptr <<endl;

  double d =4.43;
  double *p2=&d;

  cout<<"value is : "<<*ptr <<endl;

  cout<<"size of integer is "<<sizeof(num)<<endl;
  cout<<"size of pointer is "<<sizeof(p2)<<endl; 
return 0;
}
