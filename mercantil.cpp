#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int valor;

  cin >> valor;

  int chute1, chute2;

  cin >> chute1 >> chute2;

  int primeiro, segundo;

  primeiro = valor - chute1;
  segundo = valor - chute2;
  primeiro = abs(primeiro);
  segundo = abs(segundo);

  if (primeiro > segundo) {
    cout << "segundo" << endl;
  } else if (primeiro < segundo) {
    cout << "primeiro" << endl;
  } else if (primeiro == segundo) {
    cout << "empate" << endl;
  }
}