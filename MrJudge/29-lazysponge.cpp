/**
 * 29. lazysponge
 * Syntax
 * 
 * Spongebob fails at counting. He has a list of numbers but only wants to know
 * the value of the xth number.
 * 
 * Input:
 * The first line of input is a 2 integer, n and x.
 * n represents the number of numbers in the list and 0 ≤ n ≤ 50000.
 * x is the position of the number spongebob wants to know.
 * The following line contains n space-separated numbers.
 * Output:
 * Print the xth number in the list Spongebob has.
 * 
 * Sample Input:
 * 5 2
 * 1 4 6 2 9
 * Sample Output:
 * 4
*/

#include <iostream>
using namespace std;
int main() {
  int n, x;
  cin >> n >> x;
  int arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  cout << arr[x - 1];
  return 0;
}