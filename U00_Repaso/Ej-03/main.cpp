
#include <iostream>
#include "Calculadora.h"

int main() {
    Calculadora <int, float>miCalc;
    int a, b;
    std::cout << "Ejercicio 00/03\n" << std::endl;
    std::cout << "\nDividendo: ";
    std::cin >> a;
    std::cout << "\nDivisor: ";
    std::cin >> b;
    try{
        if(b==0)
            throw 1;
        std::cout << "\nResultado: " << miCalc.dividir(a, b) << std::endl;
    }
    catch (int x){
        std::cout << "\nLa division por 0 no esta definida. ERROR: " << x;
    }
    return 0;
}