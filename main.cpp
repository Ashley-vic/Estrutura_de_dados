#include <iostream>
#include <limits>

using namespace std;

string format(string str, char c){

    if( c == 'M'){
        for(int i{0}; i < (int) str.length(); i++){
            str[i] = toupper(str[i]);
        }
    }else if(c == 'm'){
        for(int i{0}; i < (int) str.length(); i++){
            str[i] = tolower(str[i]);
        }
    }else if(c == 'i'){
        for(int i{0}; i < (int) str.length(); i++){
            if(islower(str[i])){
                str[i] = toupper(str[i]);
            }else if(isupper(str[i])){
                str[i] = tolower(str[i]);
            }
        }
    }else if(c == 'p'){
        for(int i{0}; i < (int) str.length(); i++){
            if((str[i-1] == ' ' || i == 0) && str[i + 1] != ' '){
                str[i] = toupper(str[i]);
            }else {
                str[i] = tolower(str[i]);
            }
        }
    }

    return str;
}

int main() {

    string str;
    char comando;

    getline(cin, str);
    cin.clear();
    cin >> comando;

    str = format(str, comando);
    cout << str;

    return 0;
}