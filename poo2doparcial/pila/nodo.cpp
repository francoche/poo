#include "nodo.h"



template<class T>
Nodo<T>::Nodo()
{

}

template<class T>
void Nodo<T>::setdato(T dato)
{
    this->dato=dato;
}

template<class T>
T Nodo<T>::sacardato()
{
    return this->dato;
}

template<class T>
void Nodo<T>::setlink(Nodo<T> *link)
{
    this->link=link;
}

template<class T>
Nodo<T> Nodo<T>::getlink()
{
    return this->link;
}
