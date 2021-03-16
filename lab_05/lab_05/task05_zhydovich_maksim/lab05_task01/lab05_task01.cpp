/*
	This program outputs the results of multi-set operations

	Test input:   5|1 2 3 4 5
	              7|2 3 4 5 6 7 8

	Test output:  Association: 1 2 3 4 5 6 7 8
				  Intersection: 2 3 4 5
                  A / B: 1
                  B / A: 6 7 8

    Made by Zhydovich.M
*/

#include <iostream>
#include <set>
#include "multisets.h"

using namespace std;

int main() {
  multiset<int> m1;
  input_multiset(m1);
  
  multiset<int> m2;
  input_multiset(m2);

  multiset<int> association;
  Association(m1, m2, association);

  cout << "\n" << "Association: ";
  output_multiset(association);

  multiset<int> intersection;
  Intersection(m1, m2, intersection);

  cout << "\n" << "Intersection: ";
  output_multiset(intersection);

  multiset<int> subtraction1;
  Subtraction(m1, m2, subtraction1);

  cout << "\n" << "A / B: ";
  output_multiset(subtraction1);

  multiset<int> subtraction2;
  Subtraction(m2, m1, subtraction2);

  cout << "\n" << "B / A: ";
  output_multiset(subtraction2);
  
  return 0; 
}