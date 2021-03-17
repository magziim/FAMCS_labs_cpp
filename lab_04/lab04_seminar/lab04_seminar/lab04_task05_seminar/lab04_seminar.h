/*
        Syntax:   #include "lab04_seminar.h"

                  numbers(int)
                  is_palindrom(int)

                  Sign(int)
                  
                  Average(int)
                  Average(int, int)
                  Average(int,int, int)
                  Average(int, int, int, int)

                  sign(int)
                  one(int)

                  Min(T, T)
*/

#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int Sign(int n) { 
    return (n < 0) ? -1 : (n == 0) ? 0 : 1; 
}

int Average(int a) { 
    return a; 
}
float Average(int a, int b) { 
    return (a + b) / 2.0; 
}
float Average(int a, int b, int c) { 
    return (a + b + c) / 3.0; 
}
float Average(int a, int b, int c, int d) { 
    return (a + b + c + d) / 4.0; 
}

int numbers(int n) {
  int num = 0;
  while (n != 0) {
    n /= 10;
    num++;
  }
  return num;
}

bool is_palindrom(int n) {
  int num = numbers(n);
  int middle = numbers(n) / 2;
  for (int i = 1; i <= middle; i++) {
    int p = pow(10, (num - 1));
    if ((n / p) != (n % 10)) {
      return false;
    }
    n = n % p;
    n = n / 10;
    num = num - 2;
  }
  return true;
}

int sign(int n) {
  int i = 0;
  vector<int> num(1000);
  for (i; n != 0; i++) {
    int k = n % 2;
    num[i] = k;
    n /= 2;
  }
  return i;
}

int one(int n) {
  int i = 0;
  vector<int> num(1000);
  for (i; n != 0; i++) {
    int k = n % 2;
    num[i] = k;
    n /= 2;
  }
  int j = 0;
  for (i; i >= 0; i--) {
    if (num[i] == 1) {
      j += 1;
    }
  }
  return j;
}

template <typename T>
T Min(T a, T b) { 
    return (a < b) ? a : b; 
}

int Min(int a, int b) { 
    return (a < b) ? a : b; 
}
float Min(float a, float b) { 
    return (a < b) ? a : b; 
}
double Min(double a, double b) { 
    return (a < b) ? a : b;
}
char Min(char a, char b) { 
    return (a < b) ? a : b; 
}
string Min(string a, string b) { 
    return (a < b) ? a : b; 
}