#include <iostream>
using namespace std;

bool isPrime(uint32_t n) {
  if (n == 1) return false;
  for (uint32_t i=2;i<n-1;++i)
    if (n%i==0) return false;
  return true;
}

int main() {
  uint32_t n;
  cin>>n;
  cout<<(isPrime(n)?"Prime":"Not Prime");
  return 0;
}
