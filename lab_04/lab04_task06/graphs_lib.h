/*
    Functions of this library return the location of the point relative to the function graphs

    Syntax:   #include "graphs_lib.h"
              
              is_in_circle(float, float)     | x*x + y*y = 15
              is_in_parabol(float, float)    | y = x*x + 2*x - sqrt(15)
              is_down_line(float, float)     | y = 3 - x
              is_down_cos(float, float)      | y = cos(2*x)
*/

#include<iostream>
#include<cmath>

bool is_in_circle(float x, float y) {
  if ((15 - x * x) > (y * y)) {
    return true;
  } else {
    return false;
  }
}

bool is_in_parabol(float x, float y) {
  if (y > ((x * x) + (2 * x) - sqrt(15))) {
    return true;
  } else {
    return false;
  }
}

bool is_down_line(float x, float y) {
  if (y < (3 - x)) {
    return true;
  } else {
    return false;
  }
}

bool is_down_cos(float x, float y) {
  if (y < cos(2 * x)) {
    return true;
  } else {
    return false;
  }
}
