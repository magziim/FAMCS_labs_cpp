#include <iostream>
#include <cmath>
#include "lab04_seminar.h"
#include <vector>

using namespace std;

int main() { 
  vector<int> a = {11, 22, 34, 121, 211};

  for (int i = 0; i < a.size(); i++) {
    if (is_palindrom(a[i])) {
      cout << a[i] << "\n";
    }
  }

  return 0; 
}