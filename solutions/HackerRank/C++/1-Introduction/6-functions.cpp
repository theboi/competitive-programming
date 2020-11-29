#include <cstdio>
#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
  int arr[] = {a, b, c, d};

  int num = a;

  int arrSize = *(&arr + 1) - arr;

  for (int i = 0; i < arrSize; i++) {
    num = arr[i] > num ? arr[i] : num;
  }

  return num;
}

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);

  return 0;
}
