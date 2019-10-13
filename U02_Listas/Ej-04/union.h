#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB)

{
    auto C = new Lista<T>;
    for (int i=0;i<lisA.getTamanio();i++)
    {
        C->insertar(i,lisA.getDato(i));
    }
    for (int i=0;i<lisB.getTamanio();i++)
    {
        C->insertar(i + lisA.getTamanio(),lisB.getDato(i));
    }
    return C;
}


#endif //UNION_H
