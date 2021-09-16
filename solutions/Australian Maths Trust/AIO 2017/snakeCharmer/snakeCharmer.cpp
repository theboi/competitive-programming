#include <bits/stdc++.h>
using namespace std;

int main() {
  ifstream fin("snakein.txt");
  ofstream fout("snakeout.txt");

  int tx, ty;
  fin >> tx >> ty;
  fin.close();
  const int dx = tx, dy = ty;

  string moves = "";
  int ox = 0, oy = 0;
  int dir = 1;  // 0,1,2,3 -> E,N,W,S
  while (ox != dx || oy != dy) {
    cout << dx << " " << dy << " " << ox << " " << oy << "\n";
    bool isV = dir % 2 == 1;
    bool isDRight = isV ? (dir == 1 ? dx > ox : dx < ox) : (dir == 2 ? dy > oy : dy < oy);
    bool isDPos = isV ? dx > ox : dy > oy;

    if (isV ? (dx == ox) : (dy == oy)) {  // is straight ahead
      cout << "straight" << dir << isV  << " "<< dx << " " << ox << "\n";
      moves.append("LRR");
      (isV ? oy : ox) += (isDPos ? 1 : -1);
      if (isV ? dy != oy : dx != ox) {
        moves.append("L");
        (isV ? oy : ox) += (isDPos ? 1 : -1);
      }
      continue;
    }
    cout << isDRight << isV << dir << "\n";
    
    moves.append(isDRight ? "R" : "L");
    (isV ? ox : oy) += (isDPos ? 1 : -1);
    dir += (isDRight ? -1 : 1);
    if (dir < 0) dir = 4 + dir;
  }

  cout << dx << " " << dy << " " << ox << " " << oy << "\n";

  fout << moves;

  return 0;
}