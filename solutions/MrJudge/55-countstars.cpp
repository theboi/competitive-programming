#include <iostream>
using namespace std;

int main() {
  uint32_t h, w;
  cin >> h >> w;

  uint32_t count = 0;
  uint8_t t;

  for (uint32_t i = 0; i < h * w; ++i) {
    cin >> t;
    if (t == '*') {
      count++;
    }
  }

  cout << count;

  return 0;
}