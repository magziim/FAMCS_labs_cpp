#include <iostream>
#include <string>
#include <vector>
#include "lab04_seminar.h"

using namespace std;

int main() {
  int a = 5;
  int b = 7;

  double d = 1.5;
  double e = 2.5;

  char f = 'a';
  char g = 'b';

  string test1 = "abc";
  string test2 = "cba";

  cout << Min(a, b) << '\n';          // Result: 5
  cout << Min(d, e) << '\n';          // Result: 1.5
  cout << Min(f, g) << '\n';          // Result: a
  cout << Min(test1, test2) << '\n';  // Result: abc

  return 0;
}