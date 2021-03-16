#pragma once
#include <iostream>
#include <map>
#include <string>

using namespace std;

template <typename T, typename I>
void output_map(map<T, I> m) {
  for (auto it : m) {
    cout << it.first << ": " << it.second << "\n";
  }
}

template <typename T, typename I>
void output_map_size(map<T, I> m) {
  for (auto it : m) {
    cout << it.first << ": " << it.second.size() << "\n";
  }
}