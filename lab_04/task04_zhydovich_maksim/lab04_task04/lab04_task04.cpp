#include <iostream>
#include "digit_sqrt_lib.h"

using namespace std;

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  cout << digit_sqrt(n);
  return 0; 
}