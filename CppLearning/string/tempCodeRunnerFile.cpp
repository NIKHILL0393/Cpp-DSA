#include<iostream>
#include<string>
using namespace std;

int main(){
  string firstName = "ram ";
  string lastName = "kumar";
//   concatenation
//   string fullName = firstName + " "+lastName;
//   append
   string fullName = firstName.append(lastName);
  cout << fullName;
  return 0;
}