#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("tagin.txt");
  ofstream fout("tagout.txt");
  int n, m;
  fin >> n >> m;
  char ppl[n + 1];  // unassigned = 0, red = 1, blue = 2
  fill(ppl, ppl + n + 1, 0);
  ppl[1] = 1;
  ppl[2] = 2;

  int a, b;
  for (int i = 0; i < m; ++i) {
    fin >> a >> b;
    ppl[b] = ppl[a];
  }
  fin.close();
  
  int red = 0, blue = 0;
  for (int i = 1; i < n + 1; ++i) {
    if (ppl[i] == 1)
      red++;
    else if (ppl[i] == 2)
      blue++;
  }

  fout << red << " " << blue;

  return 0;
}