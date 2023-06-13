#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    float a;
    float b;
    float c;

    cout << "Digite os parametros: \n";
    cin >> a >> b >> c;

    float area (0), p;

    p = (a+b+c)/2.0;
    area = sqrt (p*(p-a)*(p-b)*(p-c));

    cout << fixed << setprecision(2) << area;

    return 0;

}