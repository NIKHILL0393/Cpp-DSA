#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Rice";  
  string*ptr= &food;
//   reference
  cout<<ptr<<"\n";
//   dereference
  cout << *ptr << "\n";

 
  return 0;
}
