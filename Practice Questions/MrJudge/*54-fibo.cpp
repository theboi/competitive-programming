/**
 * 54. fibo
 * Dynamic Programming
 * 
 * You are given a natural number N. Write a program that outputs the Nth Fibonacci number.
 * For those who were sleeping during lesson, the Fibonacci sequence is generated as follows:
 * f0 = 0
 * f1 = 1
 * fi = fi-1 + fi-2 for i ≥ 2
 * You are supposed to output an integer fN.
 * 
 * Input:
 * On the first line is an integer N (1 ≤ N ≤ 2000) and another integer M (1 ≤ M ≤ 300000).
 * Output:
 * On the first and only line output the integer fN mod M.
 * This is because fN might not fit into a integer or even long long.
 * 
 * Sample Input 1:
 * 3 10
 * Sample Output 1:
 * 2
 * Explanation 1
 * f2 = f1 + f0 = (1 + 0) % 10 = 1
 * f3 = f2 + f1 = (1 + 1) % 10 = 2
 * 
 * Sample Input 2:
 * 1000 1000
 * Sample Output 2:
 * 875
 * Explanation 2:
 * f1000 = 43 466 557 686 937 456 435 688 527 675 040 625 802 564 660 517 371 780 402 481 729 089 536 555 417 949 051 890 403 879 840 079 255 169 295 922 593 080 322 634 775 209 689 623 239 873 322 471 161 642 996 440 906 533 187 938 298 969 649 928 516 003 704 476 137 795 166 849 228 875
 * f1000 mod 1000 = 875
*/

#include <iostream>
using namespace std;
int main() {
  
}