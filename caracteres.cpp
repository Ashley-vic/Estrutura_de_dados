#include <iostream>
#include <string>

using namespace std;

// Retorna o números de ocorrências do caractere 'c' na string 'str' (com 'n'
// caracteres). Algoritmo deve ser recursivo e sem comandos de repetição.
int contaCaracteres(string str, int n, char c) {
   if(str.length() == n){
    return 0;
   }else{
    if(str[n] == c){
        return 1 + contaCaracteres(str, n+1, c);
    }else{
        return contaCaracteres(str, n+1, c);
    }
   }
}

int main() {
    int n;
    string str;
    char c;

    getline(cin, str);
    c = getchar();

    cout << contaCaracteres(str, n, c) << endl;
}