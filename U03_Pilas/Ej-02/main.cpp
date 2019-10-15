#include <iostream>
#include "../Pila/Pila.h"
#include "../Pila/Lista.h"
#include "../../U02_Listas/Lista/Lista.h"

template <class T>
void sacar(Lista<T> &lis, Pila<T> &P)
{
    T posicion;
    while(!P->esVacia())
    {
        posicion=P->pop();
        lis.remover(posicion);
    }
}

int main() {

}