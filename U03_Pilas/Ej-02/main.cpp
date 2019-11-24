#include <iostream>
#include "../Pila/Pila.h"
#include "../Lista/Lista.h"
template <class T>

int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;
    Pila<float> P1, P2;
    for (int i = 0; i < 5; i++) {
        P1.push(i + 2);
        P2.push(i + 3);
    }
    int p=0;
    for (int i = 0; i < 5; i++) {
        if (P1.pop() != P2.pop()) {
            std::cout << "Las pilas son distintas" << std::endl;
            p=1;
            break;
        }
    }
    if(p==0)
        std::cout << "Las pilas son iguales" << std::endl;
}