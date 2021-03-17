#include <iostream>
#include <string>
#include "str_sym_lib.h"

using namespace std;

int main() {
  string s;
  cout << "Enter the string: ";
  cin >> s;

  int i;
  cout << "Enter the start position: ";
  cin >> i;
  int j;
  cout << "Enter the finish position: ";
  cin >> j;

  if (i > j) {
    cout << "Error";
    return 0;
  }

  if (symmetric(s, i, j)) {
    cout << "Part of the line is symmetrical";
  } else {
    cout << "Part of the string is not symmetrical";
  }
  return 0;
}