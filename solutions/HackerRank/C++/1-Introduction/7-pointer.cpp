#include <iostream>

void update(int *a, int *b) {
  int av = *a, bv = *b;
  *a = av + bv;
  *b = abs(av - bv);
}

int main() {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}