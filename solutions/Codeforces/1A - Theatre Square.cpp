#include <iostream>

int main() {
  uint64_t n, m, a;
  std::cin >> n >> m >> a;

  uint64_t nTiles = (n + a - 1) / a;
  uint64_t mTiles = (m + a - 1) / a;

  std::cout << nTiles*mTiles;
  return 0;
}