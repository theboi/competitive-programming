#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("manin.txt");
  ofstream fout("manout.txt");
  int l1, l2, d1, d2;
  fin >> l1 >> l2 >> d1 >> d2;  // l = location, d = distance
  fin.close();

  if (l1 - d1 == l2 - d2 || l1 - d1 == l2 + d2) {
    fout << l1 - d1;
  } else if (l1 + d1 == l2 - d2 || l1 + d1 == l2 + d2) {
    fout << l1 + d1;
  }
  return 0;
}