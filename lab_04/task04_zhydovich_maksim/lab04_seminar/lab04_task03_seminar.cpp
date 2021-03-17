#include<iostream>
#include "lab04_seminar.h"

using namespace std;

int main() {
  cout << "Enter 4 numbers: ";
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << "1 number: " << Average(a) << "\n";
  cout << "2 numbers: " << Average(a, b) << "\n";
  cout << "3 numbers: " << Average(a, b, c) << "\n";
  cout << "4 numbers: " << Average(a, b, c, d);

  return 0; 
}