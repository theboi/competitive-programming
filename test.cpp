#include <chrono>
#include <iostream>
using namespace std;

void looper() {
  int i;
  int array[] = {4, 5, 6, 9, 22, 11};
  int size = sizeof(array) / sizeof(array[0]);

  for(i = 0; i < size; ++i) cout << array[i] << " ";
  cout << "\n";
}

long long test() {
  auto t1 = chrono::high_resolution_clock::now();
  looper();
  auto t2 = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<chrono::microseconds>(t2 - t1).count();
  return duration;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  int sum=0;
  for (int i = 0; i < 1000000; ++i) {
    sum += test();
  }
  cout << "\n\n\n" << (sum / 1000000);
  return 0;
}

// int main() {
//   int n,q;
//   cin>>n>>q;
//   cin.ignore();

//   string line;
//   for (int i=0;i<n;++i) {
//     getline(cin, line);

//   }

//   for (int i=0;i<q;++i) {
//     getline(cin, line);
//     cout << line << "\n";
//   }
//   return 0;
// }
