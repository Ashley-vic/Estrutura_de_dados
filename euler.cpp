#include <iomanip>
#include <iostream>

using namespace std;

double fatorial(double n) {
  if (n == 1 || n == 0) {
    return 1;
  } else {
    return n * fatorial(n - 1);
  }
}

double euler(int n) {
  double e;
  for (int i = 0; i <= n; i++) {
    e = e + (1 / fatorial(i));
  }
  return e;
}

int main() {
  cout << "Digite um número: ";
  int n;
  cin >> n;
  cout << fixed << setprecision(6) << euler(n) << endl;
  return 0;
}
