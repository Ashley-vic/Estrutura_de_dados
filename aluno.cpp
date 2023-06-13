#include <iostream>
#include <string>

using namespace std;

typedef struct Aluno{
    string nome, disciplina;
    int matricula;
    double nota;
}Aluno;

void aprova(Aluno aluno1){
    if(aluno1.nota >= 7){
        cout << aluno1.nome << " aprovado(a) em " << aluno1.disciplina
        << endl;
    }else{
        cout << aluno1.nome << " reprovado(a) em " << aluno1.disciplina
        << endl;
    }
}

int main(){
    Aluno aluno1;

    getline(cin, aluno1.nome);
    cin >> aluno1.matricula;
    cin.ignore();
    getline(cin, aluno1.disciplina);
    cin >> aluno1.nota;

    aprova(aluno1);
}