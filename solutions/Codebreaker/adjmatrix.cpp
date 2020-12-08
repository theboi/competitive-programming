#include <cstring>
#include <iostream>

using namespace std;
int main() {
  uint n, e, ea, eb;
  cin >> n >> e;
  uint g[n][n];
  memset(g, 0, sizeof(g));
  for (uint i = 0; i < e; ++i) {
    cin >> ea >> eb;
    g[ea - 1][eb - 1] = 1;
    g[eb - 1][ea - 1] = 1;
  }

  for (uint i = 0; i < n; ++i) {
    for (uint j = 0; j < n; ++j) {
      cout << g[i][j];
    }
    cout<<"\n";
  }
  return 0;
}