#ifndef LISTA_H
#define LISTA_H

#include "nodo.h"
/**
 * Clase que implementa una Lista Enlasada generica, ya que puede
 * almacenar cualquier tipo de dato T
 * @tparam T cualquier tipo de dato
 */
template<class T>
class Lista {
private:
    nodo<T> *inicio;
public:
    Lista();

    Lista(const Lista<T> &li);

    ~Lista();

    bool esVacia();

    int getTamanio();

    void insertar(unsigned int pos, T dato);

    void insertarPrimero(T dato);

    void insertarUltimo(T dato);

    void remover(int pos);

    T getDato(int pos);

    void reemplazar(int pos, T dato);

    void vaciar();
};


/**
 * Constructor de la clase Lista
 * @tparam T
 */
template<class T>
Lista<T>::Lista() {
    inicio= nullptr;
}


/**
 * Constructor por copia de la clase Lista
 * @tparam T
 * @param li
 */
template<class T>
Lista<T>::Lista(const Lista<T> &li) {}


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
    return (inicio== nullptr);
}


/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @tparam T
 * @return la cantidad de nodos de la lista
 */
template<class T>
int Lista<T>::getTamanio() {
    nodo<T> *aux= inicio;
    int cantidad=0;
    while(aux!= nullptr)
    {
        aux= aux->getSiguiente();
        cantidad++;
    }
    return cantidad;
}


/**
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param dato  dato a insertar
 */
template<class T>
void Lista<T>::insertar(unsigned int pos, T dato) {
    int posicion=0;
    nodo<T> *aux=inicio, *nuevo;

    if (pos==0){
        nuevo= new nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(inicio);
        inicio=nuevo;
        return;
    }
    while(posicion<pos-1 && aux != nullptr) // busca la posicion del nodo y que el aux no sea nulo seria llego a la ultima posicion
    {
        aux=aux->getSiguiente();
        posicion++;
    }
    if (aux== nullptr) throw 404; //es una exepcion que el trycatch lee el error


    nuevo=new nodo<T>; //creo un nuevo nodo y le inicializo valor
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
    insertar (0,dato); //sino puedo hacer el if de posicion cero aca
}


/**
 * Inserta un nodo con el dato en la ultima posicion
 * @tparam T
 * @param dato dato a insertar
 */
template<class T>
void Lista<T>::insertarUltimo(T dato) {
    nodo<T> *aux= inicio,*nuevo;
    while(aux->getSiguiente()!= nullptr)
    {
        aux=aux->getSiguiente();
    }
    if(aux== nullptr){
    nuevo=new nodo<T>; //creo un nuevo nodo y le inicializo valor
    nuevo->setDato(dato);
    nuevo->setSiguiente(aux->getSiguiente());
    aux->setSiguiente(nuevo);
    }
        nuevo= new nodo<T>;
        nuevo->setDato(dato);
        nuevo->setSiguiente(inicio);
        inicio=nuevo;
        return;

}


/**
 * Elimina el nodo en la posicion 'pos' de la lista enlasada
 * @tparam T
 * @param pos posicion del nodo a eliminar
 */
template<class T>
void Lista<T>::remover(int pos) {
    nodo<T> *aux=inicio, *aborrar;
    int posActual =0;

    while(aux!= nullptr && posActual<pos-1)
        {
            aux= aux->getSiguiente();
            posActual++;
        }
    if (aux== nullptr) {
        throw 404;
    }
    if (posActual==0){
        inicio = inicio->getSiguiente();
        delete aux;
        return;
    }
    if (aux->getSiguiente()== nullptr) throw 404;
    aborrar=aux->getSiguiente();
    aux->setSiguiente(aborrar->getSiguiente());
    delete aborrar;

}


/**
 * Obtener el dato del nodo en la posicion pos
 * @tparam T
 * @param pos posicion del dato
 * @return dato almacenado en el nodo
 */
template<class T>
T Lista<T>::getDato(int pos) {
    nodo<T> *aux=inicio;
    int posActual=0;

    while (aux!= nullptr&& posActual< pos-1)
    {
        aux= aux->getSiguiente();
        posActual++;
    }
    if (aux== nullptr){
        throw 404;
    }
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
    int posicion=0;
    nodo<T> *aux=inicio, *nuevo;
    while(aux!= nullptr&& posicion <pos-1)
    {
        aux=aux->getSiguiente();
        posicion++;
    }
    if (aux== nullptr) throw 404;

    aux->setDato(dato);

}


/**
 * Función que vacia la lista enlazada
 * @tparam T
 */
template<class T>
void Lista<T>::vaciar() {
    nodo<T> *aux=inicio, *aborrar;
    while(aux!= nullptr)
    {
        aborrar=aux;
        aux=aux->getSiguiente();
        delete aborrar;
    }
    inicio= nullptr;
}


#endif //LISTA_H