/**
 * 19. evenorodd
 * Syntax
 * 
 * Patrick the starfish doesn't have fingers. As such, he fails in Math and 
 * doesn't know how to tell whether a number is even or odd.
 * 
 * You are Spongebob, and decided to help him by writing a program that he 
 * could use everyday.
 * 
 * Sample Input 1:
 * 5
 * Sample Output 1:
 * Odd
 * 
 * Sample Input 2:
 * 6
 * Sample Output 2:
 * Even
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  cout << (n % 2 ? "Odd" : "Even");
  return 0;
}