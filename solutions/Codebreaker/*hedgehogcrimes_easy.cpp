#include <iostream>
#include <cstring>
using namespace std;

int32_t k, dptable[3100];

int32_t calc(int32_t n) {
  if (n <= 0) return 1;
  if (dptable[n] != -1) return dptable[n];
  int32_t acc = 0;
  for (int32_t i=1;i<=k;++i) {
    if (n-i == 1) {
      acc += 1;
      continue;
    }
    acc += calc(n-i);
  }
  acc += 1;
  return dptable[n] = acc%998244353;
}

int main() {
  int32_t n;
  cin>>n>>k;
  memset(dptable, -1, sizeof(dptable));
  cout<<calc(n);
  return 0;
}