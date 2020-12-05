#include <iostream>

int main() {
  uint32_t n;
  std::cin >> n;

  // Cannot give 0kg of watermelon
  if (n == 2) {
    std::cout << "NO";
    return 0;
  }

  std::cout << (n % 2 == 0 ? "YES" : "NO");

  return 0;
}
