/*
	Function return array maximum index;

	Syntax:   #include "ind_max_lib.h"

	          max_ind(int [], int)
*/ 

int max_ind(int a[], int n) {
  static int i = 1;
  static int ind = 0, max = a[0];
  if (i < n) {
    if (a[i] > max) {
      max = a[i];
      ind = i;
    }
    i += 1;
    max_ind(a, n);
  } else {
    return ind;
  }
}