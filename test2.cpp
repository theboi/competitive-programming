#include <iostream>
using namespace std;

int main() {

  int *pt = new int(10);

  int *sth = pt;

  *sth = 20;

  cout << *pt;
  return 0;
}