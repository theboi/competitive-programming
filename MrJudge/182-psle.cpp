/**
 * 182. psle
 * Syntax
 * 
 * Remember the GPA calculator you did last week? Yes it is useful but for PSLE,
 * we don't benchmark using GPAs. As such, you have to create a program that
 * takes in a score, s, and output the corresponding grade. (A*, A, B, C, D, E,
 * U)
 * 
 * The information required can be found here:
 * A*: 91 and above
 * A: 75 to 90
 * B: 60 to 74
 * C: 50 to 59
 * D: 35 to 49
 * E: 20 to 34
 * U: Below 20
 * 
 * Input:
 * The input will be a single non-negative integer not exceeding 100, s.
 * Output:
 * The grade that corresponds to the score given to the program.
 * 
 * Sample Input 1:
 * 90
 * Sample Output 1:
 * A
 * Sample Input 2:
 * 50
 * Sample Output 2:
 * C
 * Sample Input 3:
 * 97
 * Sample Output 3:
 * A*
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  if (n >= 91) {
    cout << "A*";
  } else if (n >= 75) {
    cout << "A";
  } else if (n >= 60) {
    cout << "B";
  } else if (n >= 50) {
    cout << "C";
  } else if (n >= 35) {
    cout << "D";
  } else if (n >= 20) {
    cout << "E";
  } else {
    cout << "U";
  }
  return 0;
}