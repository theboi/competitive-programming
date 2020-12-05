#include <iostream>
using namespace std;

int main() {
  uint32_t x;
  cin >> x;
  if (x == 1) {
    cout << "Hello World";
  } else {
    int64_t a, b;
    cin >> a >> b;
    cout << (a * b);
  }
  return 0;
}