/**
 * 25. checkerboard
 * Syntax
 * 
 * A checkerboard of size n is depicted as below:
 * n = 1
 * o
 * 
 * n = 2
 * ox
 * xo
 * 
 * n = 3
 * oxo
 * xox
 * oxo
 * 
 * n = 4
 * oxox
 * xoxo
 * oxox
 * xoxo
 * 
 * n = 5
 * oxoxo
 * xoxox
 * oxoxo
 * xoxox
 * oxoxo
 * 
 * Your task is to print the checkerboard given the size of the checkboard, n
 * 
 * Input: A single integer, n, where n will not exceed 50.
 * Output: The checkboard, refer to example above
 * 
 * Sample Input:
 * 7
 * Sample Output:
 * oxoxoxo
 * xoxoxox
 * oxoxoxo
 * xoxoxox
 * oxoxoxo
 * xoxoxox
 * oxoxoxo
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;

  for (int i=0;i<n;++i) {
    for (int j=0;j<n;++j) {
      cout<<(((i%2==0)^(j%2==0))==0?"o":"x");
    }
    cout<<"\n";
  }
}