/**
 * 17. calculator
 * Syntax
 * 
 * Ranald the cat was doing his P1 Math homework when he realised he has just 
 * lost his calculator! Without his calculator, he will not be able to complete 
 * his homework.
 * 
 * You, being the usual friendly & caring person, decided to be kaypoh and help 
 * by coding a program to finish his homework. (:
 * 
 * You take the glance at his Math homework and noticed that all the questions 
 * are in the format of
 * <Number> <Operator> <Number>
 * You also took note that all the numbers were positive integers and there were
 * only 3 types of operators: +, - and *.
 * 
 * Sample Input 1:
 * 5 - 3
 * Sample Output 1:
 * 2
 * 
 * Sample Input 2:
 * 7 * 7
 * Sample Output 2:
 * 49
 * 
 * Sample Input 3:
 * 13 + 4
 * Sample Output 3:
 * 17
*/

#include <iostream>
using namespace std;
int main() {
  int n, m;
  string s;
  cin >> n >> s >> m;

  if (s == "+")
    cout << n + m;
  else if (s == "-")
    cout << n - m;
  else
    cout << n * m;
  return 0;
}