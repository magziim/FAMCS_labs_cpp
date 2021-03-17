#include <iostream>
#include <string>
#include <vector>
#include "max_lib.h"   //"max_lib.h" library: Max()

using namespace std;

int main() {
  int a = 5;
  int b = 7;
  int c = 9;

  double d = 1.5;
  double e = 2.5;

  char f = 'a';
  char g = 'b';

  string test1 = "abc";
  string test2 = "cba";

  vector<int> vec = {0, 1, 5, 5, 11, 7};

  cout << Max(a) << '\n';                   //Result: 5
  cout << Max(a, b) << '\n';                //Result: 7
  cout << Max(a, b, c) << '\n';             //Result: 9
  cout << Max(d, e) << '\n';                //Result: 2.5
  cout << Max(f, g) << '\n';                //Result: b
  cout << Max(test1, test2) << '\n';        //Result: cba
  cout << Max(vec) << '\n';                 //Result: 11

  return 0; 
}