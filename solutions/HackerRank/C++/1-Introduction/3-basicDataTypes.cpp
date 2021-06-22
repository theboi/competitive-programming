#include <iostream>

using namespace std;

// 1. Using scanf/printf
int main() {
  int a;
  long b;
  char c;
  float d;
  double e;

  scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
  printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);

  return 0;
}

// 2. Using cin/cout
#include <iomanip>
int main() {
  // Supposedly makes cout/cin as fast as printf/scanf
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int a;
  long b;
  char c;
  float d;
  double e;
  cin >> a >> b >> c >> d >> e;
  cout << a << "\n" << b << "\n" << c << "\n";
  cout << fixed << setprecision(3) << d << "\n";
  cout << fixed << setprecision(9) << e << "\n";
  return 0;
}