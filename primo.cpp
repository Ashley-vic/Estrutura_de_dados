#include <iostream>

bool primo(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int n, n2;

  std::cout << "Digite dois números: ";
  std::cin >> n >> n2;

  for (int i = n; i <= n2; i++) {
    if (primo(i) == true) {
      std::cout << i << "\n";
    }
  }
}
