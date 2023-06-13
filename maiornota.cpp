#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

typedef struct Aluno{

    string nome, disciplina;
    int matricula;
    double nota;

}Aluno;

void maiornota(Aluno aluno1, Aluno aluno2){
    if(aluno1.nota == aluno2.nota){
        cout << fixed << setprecision(1) << aluno1.nome << " e " << aluno2.nome << " , " 
        << aluno1.nota << endl;
    }else if(aluno1.nota > aluno2.nota){
        cout << fixed << setprecision(1) << aluno1.nome << " , " << aluno1.nota << endl;
    }else{
        cout << fixed << setprecision(1) << aluno2.nome << " , " << aluno2.nota << endl;
    }
}

int main(){
    Aluno aluno1;

    getline(cin, aluno1.nome);
    cin >> aluno1.matricula;
    cin.ignore();
    getline(cin, aluno1.disciplina);
    cin >> aluno1.nota;
    cin.ignore();

    Aluno aluno2;

    getline(cin, aluno2.nome);
    cin >> aluno2.matricula;
    cin.ignore();
    getline(cin, aluno2.disciplina);
    cin >> aluno2.nota;

    maiornota(aluno1, aluno2);
}