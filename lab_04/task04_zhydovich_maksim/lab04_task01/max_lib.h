/*
    Functions of this library return the maximum argument

    Syntax:   #include "max_lib.h"
    
              Max(int)
              Max(int, int)
              Max(int, int, int)
              Max(double, double)
              Max(char, char)
              Max(string, string)
              Max(vector<int>)
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int Max(int a) { 
    return a; 
}

int Max(int a, int b) { 
    return (a > b) ? a : b; 
}

int Max(int a, int b, int c) {
  if (a >= b && a >= c) {
    return a;
  } else if (b >= a && b >= c) {
    return b;
  } else {
    return c;
  }
}

double Max(double a, double b) { 
    return (a > b) ? a : b; 
}

char Max(char a, char b) { 
    return (a > b) ? a : b; 
}

string Max(string a, string b) { 
    return (a > b) ? a : b; 
}

int Max(vector<int> a) {
  int max = a[0];
  for (int i = 1; i < a.size(); i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}