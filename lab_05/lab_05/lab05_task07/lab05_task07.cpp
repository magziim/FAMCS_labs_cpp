/*
    This program outputs the number of "unique" people on each street

    Test input:   5
                  Bagdanovicha Bagdanovich
                  Kupaly Kupala
                  Bagdanovicha Kolas
                  Bagdanovicha Bagdanovich
                  Kupaly Kupala
    
    Test output:  Bagdanovicha: 2
                  Kupaly: 1

    Made by Zhydovich M.
*/

#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <set>
#include "maps.h"

using namespace std;

int main() {
  cout << "Enter the number of people: ";
  int n;
  cin >> n;

  string street;
  string surname;
  
  map<string, set<string>> streets;

  cout << "Enter the street and the surname:\n";
  
  for (int i = 0; i < n; i++) {
    cout << i + 1 << ")";
    cin >> street >> surname;
    if (streets.find(street) == streets.end()) {
      set<string> myset;
      myset.insert(surname);
      streets.insert({street, myset});
    } else {
      streets[street].insert(surname);
    }
  }

  output_map_size(streets);
	
  return 0; 
}