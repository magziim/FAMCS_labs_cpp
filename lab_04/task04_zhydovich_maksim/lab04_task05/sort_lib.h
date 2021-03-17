/*
    Functions in this library sort the array

    Syntax:   #include "sort_lib.h"

              BubbleSort(vector<T>)
*/

#include<iostream>
#include<vector>

using namespace std;

template <typename T>
void BubbleSort(vector<T>& a) {
  for (int i = 0; i < a.size() - 1; i++) {
    for (int j = 0; j < a.size() - 1 - i; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
      }
    }
  }
}
