#include <iostream>
#include <utility>

int main() {
  uint32_t n, c, l;
  std::cin >> n;

  std::pair<uint32_t, uint32_t> arr[n];

  for (uint32_t i=0;i<n;++i) {
    std::cin >> c >> l;
    arr[i] = std::pair<uint32_t, uint32_t>(c, l);
  }


  for (uint32_t i=0;i<n;++i) {
    std::cout << arr[i].first << " " << arr[i].second << "\n";
  }

  return 0;
}