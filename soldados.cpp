#include <iostream>

using namespace std;

int main() {
  int nlinha, ncoluna;

  cin >> nlinha >> ncoluna;

  int soldados[nlinha][ncoluna];

  for (int i = 0; i < nlinha; i++) {
    for (int j = 0; j < ncoluna; j++) {
      cin >> soldados[i][j];
    }
  }

  int aux;

  for (int i = 0; i < nlinha - 1; i++) {
    for (int j = 0; j < ncoluna; j++) {
      if (soldados[i][j] > soldados[i + 1][j]) {
        aux++;
      }
    }
  }

  cout << aux << endl;
}