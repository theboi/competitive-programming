/**
 * 21. rightangtri
 * Syntax
 * 
 * This problems requires you to print right angled triangles.
 * Input:
 * The input is a single integer, n which 0 < n < 501. n represents the height
 * and the width of the right angled triangles.
 * Output:
 * Print a right angled triangle with height n and width n
 * 
 * Sample Input:
 * 3
 * Sample Output:
 * *
 * **
 * ***
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 1; i < n + 1; ++i) {
    cout << string(i, '*') << endl;
  }
  return 0;
}