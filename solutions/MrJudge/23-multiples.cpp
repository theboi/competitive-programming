/**
 * 23. multiples
 * Syntax
 * 
 * Spongebob likes multiples of 3.
 * Patrick likes multiples of 5.
 * Ranald likes multiples of 17.
 * Desmond likes multiples of 10.
 * Jeshua likes multiples of 13.
 * To satisfy everyone, you are to create a program that takes in a number, n, and then prints out the first m multiples of it.
 * 
 * Input:
 * Input will be 2 numbers, n followed by m, space separated.
 * -100000 <= n<= 100000
 * 0 <= m <=10000
 * Output:
 * On the mth line, print the mth multiple of n.
 * 
 * Sample Input:
 * 3 9
 * Sample Output:
 * 3
 * 6
 * 9
 * 12
 * 15
 * 18
 * 21
 * 24
 * 27
*/

#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1; i < m + 1; ++i) {
    cout << n * i;
  }
  return 0;
}