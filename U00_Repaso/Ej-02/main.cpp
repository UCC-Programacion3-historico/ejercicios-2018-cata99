#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int, int> miCalc;

    cout<<miCalc.divi(10,2)<<endl;
    cout<<miCalc.suma(5,8)<<endl;
    cout<<miCalc.resta(5,2)<<endl;
    cout<<miCalc.multi(8,4)<<endl;
    cout << "Ejercicio 00/02\n" << endl;
    return 0;
}