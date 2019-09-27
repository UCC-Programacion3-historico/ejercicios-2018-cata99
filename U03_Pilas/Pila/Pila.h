#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"
/**
 * Clase que implementa una Pila generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Pila {
private:
    nodo <T> *tope;
public:
    Pila();

    ~Pila();

    void push(T dato);

    T pop();

    T peek();

    bool esVacia();
};


/**
 * Constructor de la clase Pila
 * @tparam T
 */
template<class T>
Pila<T>::Pila() {
    tope= nullptr;
}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
Pila<T>::~Pila() {
    while (tope!= nullptr)
        pop();
}


/**
 * Obtener el dato de la pila
 * @tparam T
 * @return dato almacenado en el nodo
 */
/** el tope apunta al primero, hago que aborrar lo apunte y que tope apunte al siguiente de tope y borro aborrar*/
template<class T>
T Pila<T>::pop() {
    nodo<T> *aborrar=tope; /**creo un puntero para saber que apunte a lo que quiero sacar*/
    if (tope == nullptr) throw 404;
    T dato= tope->getDato();
    tope=tope->getSiguiente();
    delete aborrar;
    return dato;


}


/**
 * Inserta un dato en la pila
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Pila<T>::push(T dato) {
    nodo<T> *nuevo;
    nuevo= new nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(tope);
    tope = nuevo;
}

/**
 * Responde si la pila se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Pila<T>::esVacia() {
    return tope== nullptr;
}

template<class T>
T Pila<T>::peek() {
    if(tope== nullptr) throw 404;
    return tope->getDato();
}

#endif //LISTA_H