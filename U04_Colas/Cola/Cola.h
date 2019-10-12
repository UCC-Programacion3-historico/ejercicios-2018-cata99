#ifndef COLA_H
#define COLA_H

#include "nodo.h"

/**
 * Clase que implementa una Cola generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Cola {
private:
    Nodo<T> *frente, *fondo;

public:
    Cola();

    ~Cola();

    void encolar(T dato);

    T desencolar();

    bool esVacia();

    T peek();

    bool iguales (Cola<T> C1);
};


/**
 * Constructor de la clase Cola
 * @tparam T
 */
template<class T>
Cola<T>::Cola() {
    frente = nullptr;
    fondo = nullptr;
}

// live.marku.me
/**
 * Destructor de la clase Cola, se encarga de liberar la memoria de todos los nodos
 * utilizados en la Cola
 * @tparam T
 */
template<class T>
Cola<T>::~Cola() {

    while (!esVacia())
        desencolar();

}


/**
 * Inserta un dato en la Cola
 * @tparam T
 * @param dato  dato a insertar
 */
template<class T>
void Cola<T>::encolar(T dato) {

    auto *nuevo = new Nodo<T>();
    nuevo->setDato(dato);
    nuevo->setSiguiente(nullptr);

    if (fondo == nullptr) {
        frente = nuevo;
    } else {
        fondo->setSiguiente(nuevo);
    }

    fondo = nuevo;
}


/**
 * Obtener el dato de la Cola
 * @tparam T
 * @return dato almacenado en el nodo
 */
template<class T>
T Cola<T>::desencolar() {
    T aux;
    Nodo<T> *aBorrar;

    if (frente == nullptr)
        throw 404;

    aux = frente->getDato();

    aBorrar = frente;
    frente = frente->getSiguiente();

    if (frente == nullptr) {
        fondo = nullptr;
    }

    delete aBorrar;

    return aux;
}

/**
 * Responde si la Cola se encuentra Vacía
 * @tparam T
 * @return
 */
template<class T>
bool Cola<T>::esVacia() {
    return frente == nullptr;
}

template<class T>
T Cola<T>::peek() {
    if (frente == nullptr)
        throw 404;

    return frente->getDato();
}

template<class T>
bool Cola<T>::iguales(Cola<T> C1) {
        bool igual= true; Nodo<T> *aux1= frente,*aux2= C1.frente;
        while (aux1!= nullptr && aux2!= nullptr&& igual)
        {
            if (aux1->getDato() != aux2->getDato())
                igual = false;
                aux1 = aux1->getSiguiente();
                aux2 = aux2->getSiguiente();

        }
        if (aux1== nullptr&& aux2== nullptr&& igual)
            return true;
        else return false;


    }



#endif //LISTA_H