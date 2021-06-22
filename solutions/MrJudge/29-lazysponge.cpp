#include <iostream>
using namespace std;
int main() {
  int n, x;
  cin >> n >> x;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  cout << arr[x - 1];
  return 0;
}