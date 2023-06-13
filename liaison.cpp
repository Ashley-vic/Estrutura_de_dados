#include <iostream>
#include <string>

using namespace std;

int main(){

  string texto;

  getline(cin, texto);

  string saida;

  for(int i = 0; i < texto.length(); i++){
    if(texto[i] == ' ' && texto[i+1] == texto [i-1]){
      i++;
    }else{
      saida += texto[i];
    }
  }

  cout << saida << endl;

}