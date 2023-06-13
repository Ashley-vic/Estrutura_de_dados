#include <iomanip>   
#include <iostream>  

struct aluno {
  float nota[3];
  float media;
};

void calcula_media(aluno *a) {
     double soma = 0;
    for(int i = 0; i < 3; i++){
        soma += a -> nota[i];
    }

    a -> media = soma/3;
}

// Recebe vetor de alunos ('turma') e número de alunos ('n'), e chama a função
// 'calcula_media' (da questão anterior) para cada aluno do vetor.
// Ou seja, preenche o campo 'media' de cada aluno com a média das 3 notas do
// aluno.
void calcula_media_turma(aluno turma[], int n) {
    for(int i = 0; i < n; i++){
        calcula_media(&turma[i]);
    }
}

int main() {
  int n, i, j;

  std::cin >> n;
  aluno turma[n];

  for (j = 0; j < n; j++)
    for (i = 0; i < 3; i++) std::cin >> turma[j].nota[i];

  // Chame a função 'calcula_media_turma' passando o vetor de alunos 'turma'.
    calcula_media_turma(turma, n);

  for (j = 0; j < n; j++) {
    std::cout << std::fixed;
    std::cout << std::setprecision(1) << turma[j].media << " ";
  }

  return 0;
}