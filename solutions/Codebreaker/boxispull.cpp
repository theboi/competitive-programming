#include <cstdlib>
#include <iostream>

int main() {
  int32_t t, x1, x2, y1, y2;
  std::cin >> t;

  for (uint32_t i = 0; i < t; ++i) {
    // cin the coords
    std::cin >> x1 >> y1 >> x2 >> y2;

    // calc change in X and Y
    int32_t moveX = std::abs(x2 - x1);
    int32_t moveY = std::abs(y2 - y1);

    // add up X + Y + (2 if direction was changed, ie there were movements in
    // both directions)
    std::cout << (moveX + moveY + (moveY != 0 && moveX != 0 ? 2 : 0)) << "\n";
  }
  return 0;
}