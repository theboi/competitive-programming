/**
 * 133. triangle
 * Syntax
 * 
 * Sometimes, bored coders like to do lame, boring stuff like making programs
 * that do absolutely nothing but output lame asterisk triangles. This
 * particular coder, Penguin, is one of them. :D
 * 
 * Help Penguin code the program because he is too bored to do it himself. :D
 * 
 * Input:
 * A number 0 < n ≤ 30, representing the height and width of the triangle.
 * Output:
 * An asterisk triangle with height n and width n.
 * 
 * Sample Input:
 * 5
 * Sample Output:
 * *
 * **
 * ***
 * ****
 * *****
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for (int i=1;i<n+1;++i) {
    cout << string(i, '*') << "\n";
  }
  return 0;
}