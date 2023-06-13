#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string texto, aux, verifica;
    stringstream aux1;

    getline(cin, texto);

    aux1 << texto;
    aux1 >> aux;

    while (aux1 >> verifica){
        if(aux < verifica){
            aux = verifica;
        }else {
            cout << "nao" << endl;
            return 0;
        }
    }

    cout << "sim" << endl;
    return 0;
}
