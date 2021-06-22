#include <iostream>
using namespace std;

uint32_t gcd(const uint32_t a, const uint32_t b) {
  if (b == 0) return a;
  return gcd(b, a % b);
}

int main() {
  uint32_t a, b;
  cin >> a >> b;

  if (a < b) swap(a, b);
  cout << gcd(a, b);
  return 0;
}