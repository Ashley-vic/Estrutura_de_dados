#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

void inverte_palavra(string &sentenca){
    stringstream ss{sentenca};
    string palavra;

    while(ss >> palavra){
        stack<char> pilha;
        pilha.push(' ');
        for (int i = 0; i < (int)palavra.size(); ++i){
            pilha.push(palavra[i]);
        }
    
        while(!pilha.empty()){
            cout << pilha.top();
            pilha.pop();
        }
    }

    cout << endl;
}

int main(){
    string frase {"AMU MEGASNEM ATERCES"};
    inverte_palavra(frase);
}