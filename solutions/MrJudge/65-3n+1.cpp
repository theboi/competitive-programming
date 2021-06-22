#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  do {
    cout << n << " ";
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
  } while (n != 1);
  cout << "1";

  return 0;
}