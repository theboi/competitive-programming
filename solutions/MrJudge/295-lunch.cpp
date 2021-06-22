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