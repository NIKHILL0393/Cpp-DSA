#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[3] = {"Volvo", "BMW", "Tesla"};
  for (int i = 0; i < 3; i++) {
  cout << i << " = " << cars[i] << "\n";
  }
  return 0;
}