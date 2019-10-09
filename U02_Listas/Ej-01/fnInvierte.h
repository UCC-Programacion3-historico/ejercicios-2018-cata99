#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H




template <class T>
void fnInvierte (Lista<T> *lis);


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


#endif //FNINVIERTE_H
