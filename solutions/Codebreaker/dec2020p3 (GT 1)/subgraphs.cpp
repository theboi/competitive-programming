#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

vector<uint> g[1000001];
bool v[1000001];

void subg(uint n) {
  if (v[n]) return;
  v[n] = true;
  for (auto i : g[n]) {
    subg(i);
  }
  return;
}

int main() {
  uint n, e, a, b, disjoints = 0;
  cin >> n >> e;
  for (uint i = 0; i < e; ++i) {
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  for (uint i = 0; i < n; ++i) {
    if (v[i]) continue;
    disjoints += 1;
    subg(i);
  }

  cout << disjoints;

  return 0;
}