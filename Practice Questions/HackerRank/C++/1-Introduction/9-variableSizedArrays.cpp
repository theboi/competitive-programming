#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  
  vector<int> a[n];
  
  for (int i{0};i<n;i++) {
    int length;
    cin >> length;
    a[i] = vector<int>{};
    
    for (int j{0};j<length;j++) {
      int val;
      cin >> val;
      a[i].push_back(val);
    }
    
    // for (int x : a[i]) {
    //   cout << x << " ";
    // }
  }
  
  vector<int> qVals;
  
  for (int i{0};i<q;i++) {
    int x,y;
    cin >> x >> y;
    qVals.push_back(a[x][y]);
  }
  
  for (int i:qVals) {
    cout << i << endl;
  }
  
  return 0;
}