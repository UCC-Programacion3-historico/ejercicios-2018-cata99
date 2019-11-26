//
// Created by Catalina on 26/11/2019.
//
#include <iostream>
#include "NodoArbol.h"

using namespace std;

template<class T>
class grafo{
private:
    NodoArbol<T> *raiz;
public:
    grafo();

    NodoArbol<T> *getRaiz() const;

    void setRaiz(NodoArbol<T> *raiz);

    void matriz(int n, int matriz [n][n]);
private:
    void matriz(int n, NodoArbol<T> *r, int matriz [n][n]);


};

template<class T>
grafo<T>::grafo() {
    raiz= nullptr;
}

template<class T>
NodoArbol<T> *grafo<T>::getRaiz() const {
    return raiz;
}

template<class T>
void grafo<T>::setRaiz(NodoArbol<T> *raiz) {
    grafo::raiz = raiz;
}

template<class T>
void grafo<T>::matriz(int n, NodoArbol<T> *r, int matriz [n][n]) {
   int i=0;
    if (r == nullptr) {
        throw 404;
    }
}

template<class T>
void grafo<T>::matriz(int n, int (*matriz)[-1]) {
matriz(n,raiz,matriz);
}
