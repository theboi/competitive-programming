#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  cout << (n % m == 0 ? "Yes" : "No");
  return 0;
}