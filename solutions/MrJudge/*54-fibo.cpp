#include <iostream>
using namespace std;

int mem[2100];

int fib(int n, int m) {
  if (n <= 0) return 0;
  else if (n == 1) return 1;
  return fib(n-1, m) + fib(n-2, m);
}

int main() {
  int n,m;
  cin >> n >> m;
  cout << fib(n, m);
}