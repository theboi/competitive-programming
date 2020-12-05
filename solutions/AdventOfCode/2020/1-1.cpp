#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  uint32_t n, in, ans1, ans2;

  cin>>n;

  map<uint32_t, uint32_t> coms;

  for (uint32_t i=0;i<n;++i) {
    cin>>in;
    if (coms.find(in) != coms.end()) {
      ans1 = coms[in];
      ans2 = in;
    }
    coms[2020-in] = in;
  }

  cout << "\n" << (ans1*ans2);

  return 0;
}