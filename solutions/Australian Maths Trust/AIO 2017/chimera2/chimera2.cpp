#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("chimin.txt");
  ofstream fout("chimout.txt");

  int n;
  string a, b, c;
  fin >> n >> a >> b >> c;
  fin.close();

  // int final[2];
  // int count = 1;
  // bool pre, cur;  // isA
  // for (int c = 0; c < 2; ++c) {
  //   pre = c;
  //   for (int i = 0; i < n; ++i) {
  //     if (x[i] == (pre ? a[i] : b[i])) {
  //       cur = pre ? true : false;
  //     } else if (x[i] == (pre ? b[i] : a[i])) {
  //       cur = pre ? false : true;
  //     } else {
  //       fout << "PLAN FOILED";
  //       return 0;
  //     }
  //     if (pre != cur && i != 0) count++;
  //     // cout << x[i] << a[i] << b[i] << count << pre << cur << "\n";
  //     pre = cur;
  //   }
  //   final[c] = count - 1;
  // }
  // fout << "SUCCESS\n" << *min_element(final, final + 2);

  for (int i=0;i<n;++i) {
    if (c[i] != a[i] && b[i]) {
      
    } else if () {

    }
  }

  return 0;
}