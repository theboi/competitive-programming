#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for (int i=1;i<n+1;++i) {
    cout << string(i, '*') << "\n";
  }
  return 0;
}