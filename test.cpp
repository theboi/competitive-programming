#include <iostream>
using namespace std;

int main() {
  int h, w;
  string t;

  cin >> h >> w;
  cin.ignore();

  for (int i = 0; i < h; ++i) {
    for (int i = 0; i < w; ++i) {
      t = getchar();
      cout << t;
    }
  }
  return 0;
}

// int main() {
//   int n,q;
//   cin>>n>>q;
//   cin.ignore();

//   string line;
//   for (int i=0;i<n;++i) {
//     getline(cin, line);

//   }

//   for (int i=0;i<q;++i) {
//     getline(cin, line);
//     cout << line << "\n";
//   }
//   return 0;
// }
