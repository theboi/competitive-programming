// #include <iostream>
// #include <cstring>
// #include <utility>
// using namespace std;

// int a[200100], memo[200100];
// bool fled[200100];
// uint n;

// int ber(int m) {
//   if (m < 0 || m > n || fled[m]) return 0;
//   if (memo[m] != -1) return memo[m];

//   fled[m-1] = fled[m+1] = true;
//   return memo[m] = max(ber(m-1) + a[m+1], a[m] + ber(m-2));
// }

// int main() {
//   cin >> n;
//   for (uint i=0;i<n;++i) {
//     cin>>a[i];
//   }
//   memset(memo, -1, sizeof(memo));
//   memset(fled, false, sizeof(fled));
//   cout<<ber(n);
//   return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

int a[200100], memo[200100];
uint n;

int ber(int m) {
  if (m < 0 || m > n) return 0;
  if (memo[m] != -1) return memo[m];
  return memo[m] = max( ber(m-1), a[m]+ber(m-2) );
}

int main() {
  cin >> n;
  for (uint i=0;i<n;++i) {
    cin>>a[i];
  }
  memset(memo, -1, sizeof(memo));
  cout<<ber(n);
  return 0;
}