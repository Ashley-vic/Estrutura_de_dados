#include <iostream>
#include <limits>

using namespace std;

string transforma(string texto, char f) {
  if (f == 'M') {
    for (int i = 0; i < (int)texto.length(); i++) {
      texto[i] = toupper(texto[i]);
    }
  } else if (f == 'm') {
    for (int i = 0; i < (int)texto.length(); i++) {
      if (isupper(texto[i])) {
        texto[i] = tolower(texto[i]);
      }
    }
  } else if (f == 'p') {
    for (int i = 0; i < (int)texto.length(); i++) {
      if ((texto[i - 1] == ' ' || i == 0) && (texto[i + 1] != ' ')) {
        texto[i] = toupper(texto[i]);
      } else {
        texto[i] = tolower(texto[i]);
      }
    }
  } else if (f == 'i') {
    for (int i = 0; (int)texto.length(); i++) {
      if (tolower(texto[i])) {
        texto[i] = toupper(texto[i]);
      } else {
        texto[i] = tolower(texto[i]);
      }
    }
  }
    return texto;
}

int main() {
  string texto;
  char formatacao;

  getline(cin, texto);

  cin >> formatacao;

  texto = transforma(texto, formatacao);
  cout << texto << endl;

  return 0;
}