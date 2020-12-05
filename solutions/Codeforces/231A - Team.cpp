#include <iostream>

int main() {
  std::ios_base::sync_with_stdio();
  std::cin.tie();
  std::cout.tie();

  uint32_t n, temp, acc = 0, out = 0;
  std::cin >> n;

  for (uint32_t i = 0; i < n; ++i) {
    for (uint32_t j = 0; j < 3; ++j) {
      std::cin >> temp;
      acc += temp;
    }
    if (acc >= 2) {
      out++;
    }
    acc = 0;
  }

  std::cout<<out;

  return 0;
}