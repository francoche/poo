#include "pila.h"
template<class T>
Pila<T>::Pila()
{

}

template<class T>
void Pila<T>::setdatonodo(T dato)
{
    Nodo<T>n=new Nodo<T>();
    n.setdato(dato);
    n.setlink(this->pila);
    this->pila=n;
    n=NULL;
}

template<class T>
T Pila<T>::get()
{
    Nodo<T> *anterior;
    anterior=this->pila;
    T aux=this->pila->getdato();
    this->link=this->pila->getlink();
    delete anterior;
    return aux;

}
