/**
 * 128. squares
 * Syntax
 * 
 * Bob the Penguin wants to find out all the distinct areas of squares (with unique lengths of integer value) that will fit into his square container of length L. Will you help him?
 * 
 * Write a program that takes in 1 integer value, L, and output square numbers from 1 up to L*L.
 * 
 * Constraints: 0 ≤ L ≤ 1,000
 * 
 * Input:
 * Your program should read from standard input the following data:
 * The first line contains 1 integer L.
 * Output:
 * Your program should write to the standard output a single line of square numbers separated by a single space. There should not be a space character at the end of the line.
 * 
 * Sample Input 1
 * 3
 * Sample Output 1
 * 1 4 9
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