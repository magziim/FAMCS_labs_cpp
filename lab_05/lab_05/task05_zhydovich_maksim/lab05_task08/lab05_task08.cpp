/*
    Test input:   5 | 1 2 3 4 5

    Test output:  Step: 1 Min: 3 Max: 5
                  Step: 2 Min: 4 Max: 6
                  Step: 3 Min: 6 Max: 9
                  Step: 4 Min: 15 Max: 15
    
    Made by Zhydovich M.
*/

#include<iostream>
#include <set>
#include "multisets.h"

using namespace std;

int main() {
  multiset<int> numbers;
  input_multiset(numbers);
  
  int tmp = numbers.size() - 1;
  for (int i = 0; i < tmp; i++) {
    operation(numbers);
    cout << "Step: " << i + 1 << " Min: " << *numbers.begin() << " Max: " << *--numbers.end() << "\n";
  }

  return 0; 
}
