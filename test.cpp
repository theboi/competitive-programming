// using namespace std;

// int main() {
//   int arr[] = {10, 11, 21, 31};
//   int arrSize = *(&arr + 1) - arr;
//   printf("%d", (int)(sizeof(arr)/sizeof(0)));
//   // printf("%d", arr[0]);
// }
// #include <cstdio>

#include <iostream>
#include <fstream>
// #include <utility>
#include <sstream>
// #include <algorithm>
// #include <vector>
using namespace std;

// bool myfn(int i, int j) { return i<j; }

// struct myclass {
//   bool operator() (int i,int j) { return i<j; }
// } myobj;

int main()
{
  // long myints[] = {7,2,5,6,4,9};

  // // using default comparison:
  // std::cout << "The smallest element is " << *std::min_element(myints,myints+7) << '\n';
  // std::cout << "The largest element is "  << *std::max_element(myints,myints+7) << '\n';

  // cout << myints;
  int n;
  cin>>n;
  
  int arr[n];
  for (int i=0;i<n;++i) {
    cin>>arr[i];
  }

  for (int i=0;i<arr.length();++i) {
    
  }
}