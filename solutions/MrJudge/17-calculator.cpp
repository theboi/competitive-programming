#include <iostream>
using namespace std;
int main() {
  int n, m;
  string s;
  cin >> n >> s >> m;

  if (s == "+")
    cout << n + m;
  else if (s == "-")
    cout << n - m;
  else
    cout << n * m;
  return 0;
}