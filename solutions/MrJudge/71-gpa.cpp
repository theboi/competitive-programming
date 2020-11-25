/**
 * 71. gpa
 * Syntax
 * 
 * Kah Khang wants to find out whether he met his targetted Grade Point of 3.9
 * for his End-of-Year Examination. Will you help him?
 * 
 * (For those who are unsure of the computation, here are the details below)
 * 80 and above: 4.0
 * 70 to 79: 3.6
 * 65 to 69: 3.2
 * 60 to 64: 2.8
 * 55 to 59: 2.4
 * 50 to 54: 2.0
 * 45 to 49: 1.6
 * 40 to 44: 1.2
 * Below 40: 0.8
 * 
 * Write a program that takes in 1 integer value, A, and output the computed GPA of the value.
 * 
 * Constraints: 0 ≤ A ≤ 100
 * 
 * Input:
 * Your program should read from standard input the following data: The first line contains 1 integer A.
 * Output:
 * Your program should write to the standard output a single line containing a single 1 demical float.
 * 
 * Sample Input 1:
 * 75
 * Sample Output 1:
 * 3.6
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  int n;
  float gpa = 0.0;
  cin >> n;
  
  if (n < 40) {
    gpa = 0.8;
  } else if (n >= 80) {
    gpa = 4.0;
  } else if (n >= 70) {
    gpa = 3.6;
  } else {
    gpa = (n/5-5)/(12.5/5);
  }

  cout << fixed << setprecision(1) << gpa << "\n";
  return 0;
}