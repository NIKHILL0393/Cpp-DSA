#include<iostream>
#include<string>
using namespace std;

int main(){
  string text="fvntbyyjinkykjubtjbj"; 
   
  cout << "length of text is : "<< text.length()<<"\n";
  cout<<text[1]<<"\n";

  text[0]='t';
  cout<<text;
  return 0;
}