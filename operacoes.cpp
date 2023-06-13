#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void iniciaVetor(vector<int> vet) {
  if (vet.size() == 0) {
    return;
  }
  cout << vet[0] << " ";
  iniciaVetor(vector<int>(vet.begin() + 1, vet.end()));
}

void vetorInvertido(vector<int> vet) {
  if (vet.size() == 0) {
    return;
  }
  vetorInvertido(vector<int>(vet.begin() + 1, vet.end()));
  cout << vet[0] << " ";
}

int somaVetor(vector<int> vet) {
  if (vet.size() == 0) {
    return 0;
  }
  return vet[0] + somaVetor(vector<int>(vet.begin() + 1, vet.end()));
}

int multiplicaVetor(vector<int> vet) {
  if (vet.size() == 0) {
    return 1;
  }
  return vet[0] * multiplicaVetor(vector<int>(vet.begin() + 1, vet.end()));
}

int menorElemento(vector<int> vet) {
  if (vet.size() == 1) {
    return vet[0];
  }
  int menor = menorElemento(vector<int>(vet.begin() + 1, vet.end()));
  return vet[0] < menor ? vet[0] : menor;
}

void inverteVetor(vector<int>& vet, int begin, int end) {
  if (begin >= end) {
    return;
  }
  int aux = vet[begin];
  vet[begin] = vet[end];
  vet[end] = aux;
  inverteVetor(vet, begin + 1, end - 1);
}

int main() {
  vector<int> vet;
  int value;

  string line;
  getline(cin, line);
  stringstream ss(line);

  while (ss >> value) vet.push_back(value);

  cout << "vet : [ ";
  iniciaVetor(vet);
  cout << "]" << endl;

  cout << "rvet: [ ";
  vetorInvertido(vet);
  cout << "]" << endl;

  int soma = somaVetor(vet);
  cout << "sum : " << soma << endl;

  int mult = multiplicaVetor(vet);
  cout << "mult: " << mult << endl;

  int min = menorElemento(vet);
  cout << "min : " << min << endl;

  inverteVetor(vet, 0, vet.size() - 1);
  cout << "inv : [ ";
  iniciaVetor(vet);
  cout << "]" << endl;

  return 0;
}
