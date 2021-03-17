#include <iostream>
#include <vector>
#include "sort_lib.h"

using namespace std;

int main() { 
  cout << "Enter the number: ";
  int n;
  cin >> n;
  vector<int> vec(n);

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  BubbleSort(vec);

  for (int i = 0; i < n; i++) {
    cout << vec[i] << " ";
  }

  return 0;
}