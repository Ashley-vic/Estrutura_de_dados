#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

struct Aluno {
  int matricula;
  string nome;
  float media;
};

void preencherAluno(Aluno *aluno) {
  //- 3 linhas para cada aluno no vetor, contendo na 1a a matrícula, na 2a o
  //nome, e na 3a a média.
  cin >> aluno->matricula;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  getline(cin, aluno->nome);
  cin >> aluno->media;
}

string procuraMatricula(Aluno **aluno, int id, int n) {
  string resultado;
  for (int i = 0; i < n; i++) {
    if (aluno[i]->matricula == id) {
      stringstream ss;
      ss << fixed << setprecision(1) << aluno[i]->media;
      resultado = aluno[i]->nome + '\n' + ss.str();
    }
  }
  if (resultado.length() != 0) {
    return resultado;
  } else
    return "NAO ENCONTRADA";
}

int main() {
  int n, matri;
  cin >> n;

  //- Linha 1: número de alunos no vetor de alunos.
  Aluno **ptrAluno = new Aluno *[n];
  for (int i = 0; i < n; i++) {
    ptrAluno[i] = new Aluno;
    preencherAluno(ptrAluno[i]);
  }

  //- Última linha: matrícula a ser localizada no vetor.
  cin >> matri;
  cout << procuraMatricula(ptrAluno, matri, n);
}
