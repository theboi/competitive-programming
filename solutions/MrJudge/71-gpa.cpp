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