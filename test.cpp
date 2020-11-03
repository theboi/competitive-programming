#include <iostream>
using namespace std;

int main() {
  int arr[] = {10, 11, 21, 31};
  int arrSize = *(&arr + 1) - arr;
  printf("%d", (int)(sizeof(arr)/sizeof(0)));
  // printf("%d", arr[0]);
}