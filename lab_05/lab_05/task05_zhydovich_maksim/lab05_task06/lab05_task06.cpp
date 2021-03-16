/*
    Test 1 input:   3 | 1 2 3 | 6

    Test 1 output:  Action 1
                    Action 2
                    Action 3
                    Action 1
                    Action 1
                    Action 2

    Test 2 input:   5 | 1 3 4 2 7 | 4

    Test 2 output:  Action 1
                    Action 2
                    Action 3
                    Action 4

    Made by Zhydovich M.
*/

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
  cout << "Enter the number of actions: ";
  int n;
  cin >> n;
  vector<int> a(n);
  cout << "Enter the periods of action:\n";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  vector<pair<float, float>> speeds(n);
  for (int i = 0; i < n; i++) {
    speeds[i].first = 1.0 / a[i];
    speeds[i].second = 1.0 / a[i];
  }

  cout << "Enter the number of the first actions: ";
  int k;
  cin >> k;
  for (int j = 0; j < n; j++) {
    if (j < k) {
      cout << "Action " << j + 1 << "\n";
    }
  }

  int i = n;
  while (i < k) {
    for (int j = 0; j < n; j++) {
      if (i >= k) {
        break;
      }
      if (speeds[j].second / 1 == 1) {
        cout << "Action " << j + 1 << "\n";
        i++;
        speeds[j].second = 0;
      }
      speeds[j].second += speeds[j].first;
    }
  }

  return 0; 
}