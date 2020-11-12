/**
 * 82. square
 * Syntax
 * 
 * Long long ago in a faraway land, asterisks were one of the most valuable 
 * characters of all time. Sometimes, rich people liked to lay out their 
 * asterisks in a square because they were so box-brained that they couldn't 
 * think of any other shape.
 * 
 * Write a program to do just that.
 * 
 * Input: A number 0 < n ≤ 30, representing the width and height of the square.
 * Output: A square with width n and height n.
 * 
 * Sample Input:
 * 5
 * Sample Output
 * *****
 * *****
 * *****
 * *****
 * *****
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cout << string(n, '*') << "\n";
  }
  return 0;
}