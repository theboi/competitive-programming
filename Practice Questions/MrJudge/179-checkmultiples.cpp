/**
 * 179. checkmultiples
 * Syntax
 * 
 * Input 2 numbers, n and m. Check whether n is a multiple of m
 * 
 * Input:
 * The input will consists of 2 integers, n followed by m on the first line,
 * space separated.
 * Output:
 * Output 'Yes' if n is a multiple of m and 'No' if n is not a multiple of m.
 * 
 * Sample Input 1:
 * 5 4
 * Sample Output 1:
 * No
 * Sample Input 2:
 * 121 11
 * Sample Output 2:
 * Yes
*/

#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  cout << (n % m == 0 ? "Yes" : "No");
  return 0;
}