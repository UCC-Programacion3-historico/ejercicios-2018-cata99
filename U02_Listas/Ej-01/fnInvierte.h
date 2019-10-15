#include "../Lista/Lista.h"
#include "Pila.h"
#include "../../U03_Pilas/Pila/Pila.h"


#ifndef FNINVIERTE_H
#define FNINVIERTE_H

template <class T>
void fnInvierte (Lista<T> *lis){
    int t= lis->getTamanio();
    T aux, aux2;
    for (int i =0; i<t/2;i++)
    {
        aux= lis->getDato(i);
        aux2=lis->getDato(lis->getTamanio()-1-i);
        lis->reemplazar(i,aux2);
        lis->reemplazar(lis->getTamanio()-1-i,aux);
    }
}

template <class T>
T umbral(T dato,Lista<T> &Lis)
{
    T suma=0;
    for (int i = 0; i < Lis.getTamanio() ; ++i)
    {
        if(Lis.getDato(i)>dato)
        {
            suma=suma+Lis.getDato(i);
        }
    }
    return suma;
}
template <class T>
void sacar(Lista &lis, Pila *P)
{
    T posicion;
    while(!P->esVacia())
    {
        posicion=P->pop();
        lis.remover(posicion);
    }
}


#endif //FNINVIERTE_H
