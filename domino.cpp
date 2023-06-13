#include <iostream>

using namespace std;

int main(){

    int n;
    bool aux = true;

    cout << "Digite a quantidade de dominós: ";
    cin >> n;

    int vetor[n];

    cout << "digite a altura dos dominós: ";

    for(int i = 0; i < n; i++){
        cin >> vetor[i];
    }

    for(int i = 0; i < n; i++){
        if(vetor[i] > vetor[i + 1]){
            aux = false;
            break;
        }
    }

    if(aux){
        cout << "ok";
    }else {
        cout << "precisa de ajuste";
    }

}