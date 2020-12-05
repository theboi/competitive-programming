// #include <iostream>
// #include <vector>

// uint64_t expo(uint64_t x, uint64_t n, uint64_t m) {
//   uint64_t v = 1;
//   while (n > 0) {                // let the current iteration be i (0-indexed)
//     if (n & 1) v = (v * x) % m;  // if i-th bit is 1, multiply x^(2^i)
//     x = (x * x) % m;             // calculate x^(2^(i+1)) for the next iteration
//     n >>= 1;
//   }
//   return v;
// }

// int main() {
//   cout << expo(2, 10, 0);
//   return 0;
// }

#include <vector>
#include <utility>
using namespace std;

int main() {
  vector<int> name;

  return 0;
}