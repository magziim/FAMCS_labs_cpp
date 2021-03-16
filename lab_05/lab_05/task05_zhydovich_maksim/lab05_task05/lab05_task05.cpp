/*
	This program executes requests from .txt

	Test input: 1 2 3 4 5 6 7 8 9 10
	            add 7
	            delete 5
                find_min
                is_exist 10
	
	Test output: 1 2 3 4 6 7 7 8 9 10
	             Min: 1
				 10 is exist
	
	Made by Zhydovich M.
*/

#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include <sstream>
#include "multisets.h"
#include "zaprosy.h"

using namespace std;

int main() {
  multiset<int> numbers;
  input_txt_multiset("data.txt", numbers);

  zaprosy_txt("zaprosy.txt", numbers);

  output_txt_multiset("data.txt", numbers);

  return 0;
}