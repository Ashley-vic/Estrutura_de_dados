#include <iostream>

using namespace std;

int main() {
  int quadrado[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> quadrado[i][j];
    }
  }

  // armazena as somas das linhas e colunas

  int linhas[3], colunas[3];

  for (int i = 0; i < 3; i++) {
    linhas[i] = 0;
    colunas[i] = 0;

    for (int j = 0; j < 3; j++) {
      linhas[i] += quadrado[i][j];
      colunas[i] += quadrado[j][i];
    }
  }

  // armazena a soma da diagonal principal

  int dprincipal;

  for (int i = 0; i < 3; i++) {
    dprincipal += quadrado[i][i];
  }

  // armazena a soma da diagonal secundária

  int dsecundaria;

  for (int i = 2; i >= 0; i--) {
    for (int j = 0; j < 3; j++) {
      dsecundaria += quadrado[j][i];
      break;
    }
  }

  // compara linhas, colunas e diagonais

  bool aux = true;

  for (int i = 0; i < 3; i++) {
    if (linhas[i] == linhas[i + 1]) {
      for (int j = 0; j < 3; j++) {
        if (linhas[0] != colunas[j]) {
          aux = false;
          break;
        }
      }
    }else{
      aux = false;
      break;
    }
  }

  if (dprincipal == dsecundaria && aux) {
    cout << "sim" << endl;
  } else {
    cout << "nao" << endl;
  }
}