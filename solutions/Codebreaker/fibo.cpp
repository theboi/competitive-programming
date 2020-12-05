#include <iostream>
using namespace std;

uint64_t memo[200100]; // some extra space

uint64_t fibo(uint64_t n) {
  if (memo[n] != -1) return memo[n];
  return memo[n] = (fibo(n-2) + fibo(n-1))%998244353;
}

int main() {
  uint64_t n;
  cin >> n;
  memset(memo, -1, sizeof(memo)); // fill blocks of memory
  memo[0] = 0;
  memo[1] = 1;
  for (uint64_t i=0;i<n+1;++i) {
    cout<<fibo(i)<<"\n";
  }
  return 0;
}
