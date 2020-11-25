/**
 * 180. maximum
 * Syntax
 * 
 * Input 2 numbers, and output the maximum of the two numbers.
 * 
 * Input: The input will consists of 2 integers, a and b, one on each line.
 * Output: Output either a or b, whichever has the largest value.
 * 
 * Sample Input:
 * 5
 * 3
 * Sample Output:
 * 5
*/

#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  cout << (a > b ? a : b);
}