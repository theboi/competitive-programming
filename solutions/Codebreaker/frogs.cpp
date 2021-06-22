#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
  uint32_t n, m, k;
  cin >> n >> m >> k;

  uint32_t mos[k];
  pair<uint32_t, uint32_t> len[m];

  multimap<uint32_t, uint32_t> map;

  for (uint32_t i = 0; i < m; ++i) {
    cin >> len[i].first;
    len[i].second = i + 1;
  }

  for (uint32_t i = 0; i < k; ++i) {
    cin >> mos[i];
  }

  for (pair<uint32_t, uint32_t> i : len) {
    uint32_t count = 0;
    for (uint32_t j : mos) {
      count += (j % i.first == 0 ? 1 : 0);
    }
    map.insert({count, i.second});
  }

  auto range = map.equal_range(map.lower_bound(0)->first);

  cout << distance(range.first, range.second) << "\n";

  for (auto it = range.first; it != range.second; ++it) {
    cout << it->second << " ";
  }

  return 0;
}