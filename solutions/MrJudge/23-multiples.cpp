#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i < m + 1; ++i) {
    cout << n * i;
  }
  return 0;
}