#pragma once
#include <iostream>
#include <set>

using namespace std;

template <typename T>
void input_multiset(multiset<T>& m) {
  cout << "Enter the number of elements of the multiset: \n";
  int n;
  cin >> n;
  cout << "Enter the multiset: \n";
  int k;
  for (int i = 0; i < n; i++) {
    cin >> k;
    m.insert(k);
  }
}

template <typename T>
void Intersection(multiset<T> m1, multiset<T> m2, multiset<T>& intersection) {
  multiset<int>::iterator it = m1.begin();
  for (it; it != m1.end(); it++) {
    if ((m2.find(*it) != m2.end()) && intersection.count(*it) < m2.count(*it)) {
      intersection.insert(*it);
    }
  }
}

template <typename T>
void Association(multiset<T> m1, multiset<T> m2, multiset<T>& association) {
  multiset<int>::iterator it1 = m1.begin();
  multiset<int>::iterator it2 = m2.begin();
  for (it1; it1 != m1.end(); it1++) {
    association.insert(*it1);
  }
  for (it2; it2 != m2.end(); it2++) {
    if (association.find(*it2) == association.end()) {
      association.insert(*it2);
    } else if ((association.find(*it2) != association.end()) &&
               association.count(*it2) < m2.count(*it2)) {
      association.insert(*it2);
    }
  }
}

template <typename T>
void Subtraction(multiset<T> m1, multiset<T> m2, multiset<T>& subtraction) {
  multiset<int>::iterator it = m1.begin();
  for (it; it != m1.end(); it++) {
    if (m2.find(*it) == m2.end()) {
      subtraction.insert(*it);
    } else if ((m2.find(*it) != m2.end()) &&
               (subtraction.count(*it) < (m1.count(*it) - m2.count(*it)))) {
      subtraction.insert(*it);
    }
  }
}

template <typename T>
void output_multiset(multiset<T> m) {
  for (auto it : m) {
    cout << it << " ";
  }
}

template <typename T>
void djsj_txt_multiset(string file_name, multiset<T> m) {
  ifstream num(file_name);
  int number;
  while (num >> number) {
    m.insert(number);
  }
  num.close();
}