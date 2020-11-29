#include <iostream>
#include <limits>

using namespace std;

int main() {
  int n;
  cin >> n;
  // template code
  cin.ignore(numeric_limits<streamsize>::max(), '\n');

  string nums[9] = {"one", "two",   "three", "four", "five",
                    "six", "seven", "eight", "nine"};

  if (n >= 1 && n <= 9) {
    cout << nums[n - 1];
  } else if (n > 9) {
    cout << "Greater than 9";
  }

  return 0;
}
