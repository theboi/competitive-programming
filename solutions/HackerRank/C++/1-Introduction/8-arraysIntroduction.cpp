#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int length;

  cin >> length;

  int arr[length];

  int size = sizeof(arr) / sizeof(0);

  for (int i{0}; i < size; i++) {
    cin >> arr[i];
  }

  int left{0}, right{size - 1};

  while (left < right) {
    swap(arr[left], arr[right]);
    left++;
    right--;
  }

  for (int i{0}; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
