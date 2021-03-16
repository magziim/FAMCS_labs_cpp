#include<iostream>
#include<map>
#include<string>
#include<fstream>
#include "dictionary.h"

using namespace std;

void dict_rep(string file, map<string, int>& vocabulary) {
  ifstream text(file);
  string word;
  string punctuation(",.;:!?)(\/");
  while (text >> word) {
    string::size_type pos = 0;
    while ((pos = word.find_first_of(punctuation, pos)) != string::npos) {
      word.erase(pos, 1);
    }
    if (vocabulary.find(word) == vocabulary.end()) {
      vocabulary.insert({word, 1});
    } else {
      vocabulary[word]++;
    }
  }
  text.close();
}