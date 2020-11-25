/**
 * 257. summation
 * Syntax
 * 
 * Rar the cat has a list of N numbers in the range of -10000 to 10000. He wants to know the maximum sum obtainable by either subtracting or adding the numbers. The sum starts with 0 and you can either subtract or add a particular number in the list only once to the sum.
 * Input:
 * The first line will consist of a single integer, N.
 * The second line will consist of N integers, in the range of -10000 to 10000.
 * Output:
 * A single integer, the maximum sum obtainable by either subtracting or adding each number to one another.
 * Limits:
 * Subtask 1 (100%): 0 < N ≤ 100000
 * Subtask 2 (0%): As per sample testcases.
 * 
 * Sample Input 1:
 * 5
 * 1 -2 -3 4 5
 * Sample Output 1:
 * 15
 * Explanation:
 * By adding 1, 4, 5 to the sum and subtracting -2 and -3 from the sum, the maximum of 15 is obtained.
 * 
 * Sample Input 2
 * 5
 * -1 -2 -3 -4 -5
 * Sample Output 2
 * 15
 * Explanation:
 * By subtracting -1, -2, -3, -4 and -5 from the sum, the maximum of 15 is obtained.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n,t,m=0;
  cin>>n;

  for(int i=0;i<n;++i) {
    cin>>t;
    m+=abs(t);
  }

  cout<<m;
}