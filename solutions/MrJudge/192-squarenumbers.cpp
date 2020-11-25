/**
 * 192. squarenumbers
 * Number Theory
 * 
 * Remember the problem, triangle numbers? Now we have a squares variant of it.
 * Observe the following squares with length n:
 * n = 1
 * *
 * n = 2
 * **
 * **
 * n = 3
 * ***
 * ***
 * ***
 * n = 4
 * ****
 * ****
 * ****
 * ****
 * n = 5
 * *****
 * *****
 * *****
 * *****
 * *****
 * 
 * Your task is to find the number of asterisks, (square numbers) given the
 * length of the square, n.
 * 
 * Input:
 * A single integer, n, which denotes the length of the square.
 * Output:
 * A single number, the number of asterisks in the square.
 * 
 * Sample Input:
 * 3
 * Sample Output:
 * 9
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;

  cout<<(n*n);
}