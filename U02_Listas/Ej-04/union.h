#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB)// no seria con un asterisco aca?
//creo una lista nueva, hago un for con imput a la lista nueva hasta lisA->gettamanio y despues otro for con i que inicia en el get tamanio de a hasta el tamanio de LisA lisB

{
    Lista<T> C;
    for (int i=0;i<lisA.getTamanio();i++)
    {
        C.insertar(i,lisA.getDato(i));
    }
    for (int i=0;i<lisB.getTamanio();i++)
    {
        C.insertar(i + lisA.getTamanio(),lisB.getDato(i));
    }
    C.print();
}


#endif //UNION_H
