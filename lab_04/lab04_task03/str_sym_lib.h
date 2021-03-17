/*
	Function checks if part of the string is symmetrical

	Syntax:   #include "str_sym_lib.h"
	          
			  symmetric(string, int, int)
*/

#include <string>

using namespace std;

bool symmetric(string s, int i, int j) {
  if (j >= i) {
    if (s[i] == s[j]) {
      return symmetric(s, i + 1, j - 1);
    } else {
      return false;
    }
  } else {
    return true;
  }
}