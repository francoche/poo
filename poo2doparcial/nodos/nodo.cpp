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
void Nodo<T>::setlink(Nodo *link)
{
    this->link=link;
}

template<class T>
T Nodo<T>::getdato()
{
    return this->dato;
}

template<class T>
Nodo<T> *Nodo<T>::getlink()
{
    return this->link;
}
