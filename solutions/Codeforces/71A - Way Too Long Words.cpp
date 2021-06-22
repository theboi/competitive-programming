#include <iostream>

int main() {
  uint32_t n;
  std::cin>>n;

  std::string word;
  for (uint32_t i=0;i<n;++i) {
    std::cin >> word;
    if (word.length() > 10) {
      std::cout << word[0] << word.length()-2 << word[word.length()-1] << "\n";
    } else {
      std::cout << word << "\n";
    }
  }
}