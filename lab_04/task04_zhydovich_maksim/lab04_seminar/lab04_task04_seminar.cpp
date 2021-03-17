#include<iostream>
#include<vector>
#include "lab04_seminar.h"

using namespace std;

int main() {
  cout << "Enter the number: ";
  int n;
  cin >> n;

  cout << "Number of significant digits: " << sign(n) << "\n";
  cout << "Number of one: " << one(n) << "\n";
  return 0; 
}