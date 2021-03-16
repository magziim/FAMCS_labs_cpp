#pragma once
#include<iostream>
#include<string>
#include<vector>
#include <utility>

using namespace std;

template <typename T>
void input_pairs(vector<pair<T, T>>& vec) {
  cout << "Enter the number of pairs: ";
  int n;
  cin >> n;
  string s1, s2;
  for (int i = 0; i < n; i++) {
    cout << i + 1 << ")";
    cin >> s1 >> s2;
    vec.push_back({s1, s2});
  }
}

int substring_pos(pair<string, string> pair) {
    if (pair.first.find(pair.second) > pair.first.length()) {
      return -1;
    } else {
      return pair.first.find(pair.second);
    }
}