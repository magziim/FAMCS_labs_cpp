/*
	This program creates a dictionary of text repetitions

	Made by Zhydovich M.
*/

#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include "dictionary.h"
#include "maps.h"

using namespace std;

int main() {
  map<string, int> vocabulary;
  dict_rep("text.txt", vocabulary);
  
  output_map(vocabulary);

  return 0; 
}