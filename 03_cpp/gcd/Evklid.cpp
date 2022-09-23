#include <iostream>
using namespace std;
int main()
 {
  int y, x;
  cin >> x >> y;
  while (x != y) {
    if (x>y) {
      x = x-y;
    }
    else {
      y = y-x;
    }
  }
  cout << x;
}