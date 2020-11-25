/**
 * 65. 3n+1
 * Syntax
 * 
 * The 3n+1 sequence is generated as follows. Starting from a number n, we get
 * the next number in the sequence by doing this:
 * - If n is even, the next number is n/2.
 * - If n is odd, the next number is 3n+1.
 * 
 * We continue this way until we reach 1.
 * 
 * Your task is: given n ≤ 10000, generate the sequence.
 * 
 * Sample Input 1:
 * 5
 * Sample Output 1:
 * 5 16 8 4 2 1
 * 
 * Sample Input 2:
 * 7
 * Sample Output 2:
 * 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1 
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  do {
    cout << n << " ";
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
  } while (n != 1);
  cout << "1";

  return 0;
}