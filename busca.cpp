#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Aluno {
  int matricula;
  string nome;
  double media;
};

int main() {
  int n, matricula;
  
  cin >> n;
  
  Aluno *alunos = new Aluno[n];
  
  for (int i = 0; i < n; i++) {
    cin >> (alunos + i)->matricula;
    cin.ignore();
    getline(cin, (alunos + i)->nome);
    cin >> (alunos + i)->media;
  }
  
  cin >> matricula;
  
  bool encontrado = false;
  
  for (int i = 0; i < n; i++) {
    if ((alunos + i)->matricula == matricula) {
      cout << fixed << setprecision(1) << (alunos + i)->nome << endl << (alunos + i)->media << endl;
      encontrado = true;
      break;
    }
  }
  
  if (!encontrado) {
    cout << "NAO ENCONTRADA" << endl;
  }
  
  delete[] alunos;
  
  return 0;
}
