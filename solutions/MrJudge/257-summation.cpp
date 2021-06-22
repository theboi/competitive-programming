#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n,t,m=0;
  cin>>n;

  for(int i=0;i<n;++i) {
    cin>>t;
    m+=abs(t);
  }

  cout<<m;
}