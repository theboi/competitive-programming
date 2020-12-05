#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int32_t t, x1, x2, y1, y2;
  cin >> t;

  for (uint32_t i = 0; i < t; ++i) {
    cin >> x1 >> y1 >> x2 >> y2;

    int32_t moveX = abs(x2 - x1);
    int32_t moveY = abs(y2 - y1);

    cout << (moveX + moveY + (moveY != 0 && moveX != 0 ? 2 : 0)) << "\n";
  }
  return 0;
}