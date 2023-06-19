#include <iostream>
#include <chrono>

using namespace std;

//ordena um vetor A[l...r] com indice inicial l
//e indice final r, contendo r-l+1 elementos
//Complexidade: O(n²);

void bubblesort(int A[], int l, int r){
    for(int i = l; i < r; i++){
        for(int j = r; j > i; j--){
            if(A[j] < A[j - 1]){
                int aux = A[j];
                A[j] = A[j - 1];
                A[j-1] = aux;
                //swapA[j], A[j - 1];
            }
        }
    }
}

void print(int A[], int n){
    for(int i = 0; i < n; i++){
        cout << A[i] << " ";
    }
}

int main(){
    const int tam = 1000;
    int vec[tam];

    for(int i = 0; i < tam; i++){
        vec[i] = rand() % 100;
    }

    print(vec, tam);

    auto start = chrono::steady_clock::now();
    bubblesort(vec, 0, tam-1);
    auto end = chrono::steady_clock::now();

    auto duration = chrono::duration_cast<chrono::microseconds>(end-start);
    cout << "tempo: " << duration.count() << "microssegundos" << endl;
    print(vec, tam);
    cout << endl;
}