#include <iostream>
#include <utility>
using namespace std;

int main() {
  uint32_t n, c, l;
  cin >> n;

  pair<uint32_t, uint32_t> arr[n];

  for (uint32_t i=0;i<n;++i) {
    cin >> c >> l;
    arr[i] = pair<uint32_t, uint32_t>(c, l);
  }


  for (uint32_t i=0;i<n;++i) {
    cout << arr[i].first << " " << arr[i].second << "\n";
  }

  return 0;
}