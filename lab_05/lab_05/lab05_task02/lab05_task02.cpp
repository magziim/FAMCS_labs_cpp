/*
    This program outputs the number of different strings in the file

    Made by Zhydovich.M
*/

#include<iostream>
#include <string>
#include <fstream>
#include <set>
 
using namespace std;

int main() {
  ifstream fin("strings.txt");
  string str;
  set<string> strings;
  while (getline(fin, str)) {
    strings.insert(str);
  }
  cout << "Number of different strings: " << strings.size();
  return 0; 
}