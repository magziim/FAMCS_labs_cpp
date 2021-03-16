#include <iostream>
#include <fstream>
#include <set>
#include <string>
#include "zaprosy.h"

using namespace std;

void zaprosy_txt(string file_name, multiset<int>& m) {
  ifstream fin(file_name);
  string zapros;
  int n;
  while (fin >> zapros) {
    if (zapros == "add") {
      fin >> n;
      m.insert(n);
    } else if (zapros == "delete") {
      fin >> n;
      m.erase(n);
    } else if (zapros == "find_min") {
      cout << "Min: " << *m.begin() << "\n";
    } else if (zapros == "is_exist") {
      fin >> n;
      if (m.find(n) != m.end()) {
        cout << n << " is exist" << "\n";
      } else {
        cout << n << " isn't exist" << "\n";
      }
    }
  }
}