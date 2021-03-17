#include <iostream>
#include "ind_max_lib.h"

using namespace std;

int main() {
  cout << "Enter the number: ";
  int n;
  cin >> n;
  int *a = new int [n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << "Index of the maximum number: " << max_ind(a, n);

  return 0;
}







