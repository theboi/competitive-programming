/**
 * 295. lunch
 * Syntax
 * 
 * Jiahai is eating potatoes for lunch today! Secretly, Jiahai has been a
 * gourmet expert with regards to potatoes, and he often gives ratings on the
 * deliciousness of a particular potato when he eats it.
 * 
 * Today, he is in the mood of rating potatoes, as he always is. Given an
 * integer N ranging from 1 to 10, indicating Jiahai's rating of the potato he
 * is currently eating, output the comment he should say based on the following
 * rules:
 * - If his rating is less than 3, he will say "That's a terrible potato!"
 * - If his rating is from 3 to 5, he will say "That's a normal potato!"
 * - If his rating is from 6 to 8, he will say "That's a good potato!"
 * - If his rating is above 8, he will go crazy and scream "OMG POTATOES!!!"
 * 
 * Input:
 * The input will contain a single line with an integer N
 * Output:
 * Output a single line with the comment Jiahai will say based on his rating of
 * the potato.
 * Your output should end with a newline.
 * 
 * Limits
 * 1 <= N <= 10
 * 
 * Sample Input:
 * 3
 * Sample Output:
 * That's a normal potato! 
*/

#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  if (n < 3) {
    cout << "That's a terrible potato!";
  } else if (n <= 5) {
    cout << "That's a normal potato!";
  } else if (n <= 8) {
    cout << "That's a good potato!";
  } else {
    cout << "OMG POTATOES!!!";
  }
  return 0;
}