#include <iostream>
using namespace std;

int main() {
  uint n, temp;
  cin>>n;
  uint arr[n];

  for (uint i=0;i<n;++i) {
    cin>>temp;
    arr[temp-1] = i;
  }
  for (uint i:arr) {
    cout<<i+1<<"\n";
  }
  return 0;
}