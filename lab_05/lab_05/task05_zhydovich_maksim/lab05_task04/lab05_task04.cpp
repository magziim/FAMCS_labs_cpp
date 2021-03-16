/*
    This program determines if the first string is a substring of the second string

    Test input:   2
                  papa apa
                  lala ma

    Test output:  Yes, 1
                  No

    Made by Zhydovich M.
*/
#include<iostream>
#include<string>
#include<vector>
#include "string_pair.h"
#include <utility>

using namespace std;

int main() {
  vector<pair<string, string>> pairs;
  input_pairs(pairs);
	
  for (auto i : pairs) {
    if (substring_pos(i) == -1) {
      cout << "No" << "\n";
    } else {
      cout << "Yes, " << substring_pos(i) << "\n"; 
    }
  }

  return 0; 
}