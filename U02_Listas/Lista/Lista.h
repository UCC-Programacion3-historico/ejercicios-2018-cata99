#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include "../Ej-01/Pila.h"

/**
 * Clase que implementa una Lista Enlasada generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Lista {
private:
    Nodo<T> *inicio;

public:
    Lista();

    Lista(const Lista<T> &li);

    ~Lista();

    bool esVacia();

    int getTamanio();

    void insertar(unsigned int pos, T dato);

    void insertarPrimero(T dato);

    void insertarUltimo(T dato);

    T getDato(int pos);

    void remover(int pos);

    void reemplazar(int pos, T dato);

    void vaciar();

    void moverUlti(int pos);

    void moverPri(T dato);

    void print();

    void agregar(int dato, int ubicacion );

    void eliminar(int pos);

    void cambiarnodos(int pos1, int pos2);


};


/**
 * Constructor de la clase Lista
 * @tparam T
 */
template<class T>
Lista<T>::Lista() {
    inicio = nullptr;
}


/**
 * Constructor por copia de la clase Lista
 * @tparam T
 * @param li
 */
template<class T>
Lista<T>::Lista(const Lista<T> &li) {
    inicio=li.inicio;
}


/**
 * Destructor de la clase Lista, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
Lista<T>::~Lista() {
    vaciar();
}


/**
 * Metodo para saber si la lista esta vacia
 * @tparam T
 * @return true si la lista esta vacia, sino false
 */
template<class T>
bool Lista<T>::esVacia() {
    return inicio == nullptr;

}


/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @tparam T
 * @return la cantidad de nodos de la lista
 */
template<class T>
int Lista<T>::getTamanio() {
    Nodo<T> *aux = inicio;
    int cant = 0;
    while (aux != nullptr) {
        aux = aux->getSiguiente();
        cant++;
    }
    return cant;

}


/**
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param dato  dato a insertar
 */
template<class T>
void Lista<T>::insertar(unsigned int pos, T dato) {
    int posActual = 0;
    Nodo<T> *aux = inicio, *nuevo;


    if (pos == 0) {
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
        return;
    }


    while (posActual < pos - 1 && aux != nullptr) {
        aux = aux->getSiguiente();
        posActual++;
    }

    if (aux == nullptr)
        throw 404;

    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(aux->getSiguiente());
    aux->setSiguiente(nuevo);


}


/**
 * Inserta un nodo con el dato en la primera posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void Lista<T>::insertarPrimero(T dato) {
    insertar(0, dato);
}


/**
 * Inserta un nodo con el dato en la ultima posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void Lista<T>::insertarUltimo(T dato) {
    Nodo<T> *aux = inicio, *nuevo;

    if (aux == nullptr) {
        nuevo = new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
        return;
    }

    while (aux->getSiguiente() != nullptr) {
        aux = aux->getSiguiente();
    }


    nuevo = new Nodo<T>;
    nuevo->setDato(dato);
    nuevo->setSiguiente(aux->getSiguiente());
    aux->setSiguiente(nuevo);
}


/**
 * Elimina el nodo en la posicion 'pos' de la lista enlasada
 * @tparam T
 * @param pos posicion del nodo a eliminar
 */
template<class T>
void Lista<T>::remover(int pos) {
    Nodo<T> *aux = inicio, *aBorrar;
    int posActual = 0;


    while (aux != nullptr && posActual < pos - 1) {
        aux = aux->getSiguiente();
        posActual++;
    }

    if (aux == nullptr)
        throw 404;

    if (pos == 0) {
        inicio = inicio->getSiguiente();
        delete aux;
        return;
    }

    if (aux->getSiguiente() == nullptr)
        throw 405;


    aBorrar = aux->getSiguiente();
    aux->setSiguiente(aBorrar->getSiguiente());

    delete aBorrar;


}


/**
 * Obtener el dato del nodo en la posicion pos
 * @tparam T
 * @param pos posicion del dato
 * @return dato almacenado en el nodo
 */
template<class T>
T Lista<T>::getDato(int pos) {
    Nodo<T> *aux = inicio;
    int posActual = 0;

    while (aux != nullptr && posActual < pos) {
        aux = aux->getSiguiente();
        posActual++;
    }

    if (aux == nullptr)
        throw 404;

    return aux->getDato();


}


/**
 * Reemplaza el dato almacenado en un nodo por este otro
 * @tparam T
 * @param pos posicion donde se desea reemplazar
 * @param dato nuevo dato a almacenar
 */
template<class T>
void Lista<T>::reemplazar(int pos, T dato) {
    Nodo<T> *aux = inicio;
    int posActual = 0;

    while (aux != nullptr && posActual < pos) {
        aux = aux->getSiguiente();
        posActual++;
    }
    if (aux == nullptr)
        throw 404;

    aux->setDato(dato);


}


/**
 * Función que vacia la lista enlazada
 * @tparam T
 */
template<class T>
void Lista<T>::vaciar() {
    Nodo<T> *aux = inicio, *aBorrar;

    while (aux != nullptr) {
        aBorrar = aux;
        aux = aux->getSiguiente();
        delete aBorrar;
    }
    inicio = nullptr;

}

template<class T>
void Lista<T>::moverUlti(int pos) {
    Nodo<T> *aux = inicio, *aMover;
    int posActual = 0;
    while (aux != nullptr && posActual < pos - 1) {
        aux = aux->getSiguiente();
        posActual++;
    }

    if (aux != nullptr) {
        throw 404;
    }

    if (pos == 0) {
        aMover = inicio;
        inicio = inicio->getSiguiente();
        aux = inicio;
    } else {
        aMover = aux->getSiguiente();
        aux->setSiguiente(aMover->getSiguiente());
    }

    aMover->setSiguiente(nullptr);

    while (aux->getSiguiente() != nullptr) {
        aux = aux->getSiguiente();
    }

    aux->setSiguiente(aMover);
}


template<class T>
void Lista<T>::moverPri(T dato) {
    Nodo<T> *aux = inicio, *aMover;

    // si la lista esta vacia tiro exp
    if (aux == nullptr)
        throw 404;

    // Si el dato ya está en el primer lugar no hago nada
    if (aux->getDato() == dato)
        return;

    while (aux->getSiguiente() != nullptr && aux->getSiguiente()->getDato() != dato) {
        aux = aux->getSiguiente();
    }
    if (aux->getSiguiente() == nullptr)
        throw 404;

    aMover = aux->getSiguiente();
    aux->setSiguiente(aMover->getSiguiente());

    aMover->setSiguiente(inicio);

    inicio = aMover;
}

template<class T>
void Lista<T>::print() {
    Nodo<T> *aux = inicio;

    while (aux != nullptr) {
        std::cout << aux->getDato() << "->";
        aux = aux->getSiguiente();
    }
    std::cout << "NULL" << std::endl;
}

/**
 * Función que agrega datos a la lista con ubicacion referida por el usuario, ingresa por teclado 0 para insertar al principio, 1 para insertar al medio y 2 para insertar al ultimo
 * ejercicio dos
 * @tparam dato
 * @tparam ubicacion
 */
template<class T>
void Lista<T>::agregar(int dato, int ubicacion) {
    Nodo<T> *aux=inicio, *nuevo;int posactual=0;

    if (ubicacion==0) //caso de insertar en la posicion cero
    {
        nuevo= new Nodo<T>;
        nuevo->setSiguiente(inicio);
        nuevo->setDato(dato);
        inicio= nuevo;
        return;
    }
    if (ubicacion==1) // caso en el que pide una ubicacion en el medio
    {
        while (aux->getSiguiente()!= nullptr&& posactual<(getTamanio()/2)-1)
        {
            aux=aux->getSiguiente();
            posactual++;
        }
        nuevo= new Nodo<T>;
        nuevo->setSiguiente(aux->getSiguiente());
        nuevo->setDato(dato);
        aux->setSiguiente(nuevo);
    }
    if (ubicacion==2)
    {
        while (aux->getSiguiente()!= nullptr)
        {
            aux=aux->getSiguiente();
        }
        nuevo= new Nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(nullptr);
        aux->setSiguiente(nuevo);

    }
}
/**
 * Función que elimina elementos en una posicion determinada de la lista
 * ejercicio tres
 * @tparam dato
 * @tparam ubicacion
 */

template<class T>
void Lista<T>:: eliminar(int pos)
{
    Nodo<T> *aux=inicio,*aBorrar;
    int posActual=0;
    while (aux != nullptr && posActual < pos-1)
    {
        aux=aux->getSiguiente();
        posActual++;
    }
    aBorrar= aux->getSiguiente();
    aux->setSiguiente(aBorrar->getSiguiente());
    delete *aBorrar;
    if (pos==0)
    {
        inicio=aux->getSiguiente();
        delete *aux;
        return;
    }

    if (aux->getSiguiente()== nullptr)
        throw 404;
    if (aux== nullptr)
        throw 404;
}

template<class T>
void Lista<T>::cambiarnodos(int pos1, int pos2) {
    Nodo<T> *aux1=inicio, *aux2=inicio,*siguiente, *amover1,*amover2;int posaux1=0, posaux2=0, cambio=0;
    if (pos1>pos2)
    {
        cambio=pos1;
        pos1=pos2;
        pos2=cambio;
    }

    while(aux2!= nullptr&& posaux2<pos2 -1)
    {
        aux2=aux2->getSiguiente();
        posaux2++;
    }
    while(aux1!= nullptr&& posaux1 < pos1 -1)
    {
        aux1=aux1->getSiguiente();
        posaux1++;
    }

    amover1=aux1->getSiguiente();
    amover2=aux2->getSiguiente();
    siguiente=amover1->getSiguiente();
    if (pos1==0)
    {
        if(amover2->getSiguiente()== nullptr)
        {
            amover2->setSiguiente(aux1->getSiguiente());
            aux2->setSiguiente(aux1);
            aux1->setSiguiente(nullptr);
            inicio=amover2;
        } else{
            siguiente=amover2->getSiguiente();// siguiente apunta al siguiente de amover2
            amover2->setSiguiente(aux1->getSiguiente());
            aux2->setSiguiente(aux1);
            aux1->setSiguiente(siguiente);
            inicio=amover2;
        }
    }
    if(amover2->getSiguiente()== nullptr)
    {
        aux1->setSiguiente(amover2);
        amover2->setSiguiente(amover1->getSiguiente());
        aux2->setSiguiente(amover1);
        amover1->setSiguiente(nullptr);
    }

    if(pos1<0&&pos2<getTamanio())
    {
        aux2->setSiguiente(amover1);
        aux1->setSiguiente(amover2);
        amover1->setSiguiente(amover2->getSiguiente());
        amover2->setSiguiente(siguiente);
    }

}
#endif //LISTA_H