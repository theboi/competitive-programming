#include <iostream>
#include <vector>
using namespace std;

int main() {
  uint n, e, ea, eb;
  cin >> n >> e;

  vector<uint> g[n];

  for (uint i = 0; i < e; ++i) {
    cin >> ea >> eb;
    g[ea - 1].push_back(eb);
    g[eb - 1].push_back(ea);
  }

  for (vector<uint> i : g) {
    for (int j : i) {
      cout << j << " ";
    }
    if (!i.empty()) cout << "\n";
  }
  return 0;
}