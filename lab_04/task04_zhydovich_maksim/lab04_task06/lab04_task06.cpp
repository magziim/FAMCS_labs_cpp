#include <iostream>
#include <cmath>
#include "graphs_lib.h"

using namespace std;

int main() { 
  cout << "Enter the number x: ";
  float x;
  cin >> x;
  cout << "Enter the y: ";
  float y;
  cin >> y;

  if (x * x > 36 || y * y > 36) {
    cout << "Error! Enter a number from the range [-6;6]";   //range check
  }

  if (x > 0 && y >= 0) {
    if (!is_in_circle(x, y) && !is_in_parabol(x, y)) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  } else if (x < 0 && y > 0) {
    if (is_in_parabol(x, y) && is_down_line(x, y) && !is_in_circle(x, y)) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  } else if (x <= 0 && y <= 0) {
    if (is_down_cos(x, y) && !is_in_circle(x, y) && !is_in_parabol(x, y)) {
      cout << "Yes";
    } else {
      cout << "No";
    }
  } else {
    cout << "No";
  }
  return 0; 
}