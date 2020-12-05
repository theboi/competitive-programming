#include <iostream>
#include <utility>
using namespace std;

int main() {
  uint32_t q;
  cin >> q;
  pair<uint32_t, uint32_t> in[q];
  for (uint32_t i = 0; i < q; ++i) {
    cin >> in[i].first >> in[i].second;
  }

  return 0;
}