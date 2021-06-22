#include <iostream>
using namespace std;

int main() {
  uint d, acc=0, temp;
  cin>>d;

  for(uint i=0;i<d;++i) {
    cin>>temp;
    acc += temp;
  }
  cout<<acc;
  return 0;
}