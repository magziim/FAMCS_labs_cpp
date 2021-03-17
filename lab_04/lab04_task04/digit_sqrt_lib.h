/*
	Function return the digital sqrt of a number

	Syntax:   #include "digit_sqrt_lib.h"

	          digit_sqrt(int)
*/

int digit_sqrt(int n) {
  if (n / 10 != 0) {
    int tmp = n;
    n = 0;
    while (tmp != 0) {
      n += tmp % 10;
      tmp /= 10;
    }
    digit_sqrt(n);
  } else {
    return n;
  }
}