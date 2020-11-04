#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    
    int low, high;
    cin >> low >> high;
    
    string nums[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    for (int i=low; i<=high; i++) {
        cout << (i>=1&&i<=9?nums[i]:(i%2==0?"even":"odd")) << endl;
    }
    return 0;
}
