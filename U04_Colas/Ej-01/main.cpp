#include <iostream>
#include "../Cola/Cola.h"
#include "../Cola/Pila.h"

using namespace std;

template<class T>
Pila<T> *invertir(Cola<T> &C) {
    auto *P= new Pila<T>;
    while (!C.esVacia()) {
        P->push(C.desencolar());
    }
    return P;
}

int main()
{   Pila<int> *P;
    Cola <int> c1,c2;
    c1.encolar(1);
    c1.encolar(2);
    c1.encolar(3);
    P=invertir(c1);
    while(!P->esVacia())
    {
        cout<<P->pop()<<endl;
    }


    c2.encolar(1);
    c2.encolar(2);
    c2.encolar(3);
    if (c1.iguales(c2))
        std::cout<<"son iguales";
    else
        std::cout <<"son diferentes";
}