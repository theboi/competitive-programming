/**
 * 25. sumint
 * Syntax
 * 
 * Gary the snail [that goes meow] has been trying to use Microsoft Excel to calculate how many times he has meowed. However, Microsoft Excel, being a product of Microsoft, has crashed and he now cannot calculate how many times he has meowed. He knows how many times he meowed in each day but needs you to write a program to sum up how many times he meowed in d days and tell him the total amount.
 * 
 * Input:
 * On the first line of input is the number of days he wants you to sum, d. Where 1 <= d <=10000.
 * On the following line will be d space-separated numbers, 0 <= di <=100000.
 * 
 * Sample Input:
 * 10
 * 37 17 38 47 29 83 13 2 8 72
 * Sample Output:
 * 346
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