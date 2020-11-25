/**
 * 30. bubblesort
 * Sorting
 * 
 * Infocomm club members visit Koi frequently after CCA meetings. Koi is a popular bubble tea outlet which sells tea with pearls (or bubbles).
 * 
 * One day, while enjoying Koi, Kenneth Chow decided to sort the bubbles in his mouth by their diameter. However, since it is hard to think when there's something inside your mouth. He asked you for help. Being a C++ freak, you wanted to code a program to do Bubble Sort.
 * 
 * Input:
 * The first line of input is n, which is the number of bubbles Kenneth has in
 * his mouth.
 * Kenneth has a big mouth, which can hold up to 2000 bubbles.
 * The next line consists of n space separated numbers, representing the
 * diameter of the bubbles in Kenneth's mouth.
 * Output:
 * Sort the list of diameters and print them out in ascending order, space-separated.
 * 
 * Sample Input:
 * 10
 * 5 8 2 3 7 4 9 7 1 2
 * Sample Output:
 * 1 2 2 3 4 5 7 7 8 9
 * *There is no extra space behind the last number of the output*
*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }

  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - 1 - i; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  for (int i = 0; i < n; ++i) {
    cout << arr[i];
  }

  return 0;
}