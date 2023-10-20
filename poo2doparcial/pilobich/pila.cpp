#include "pila.h"



template<class T>
Pila<T>::Pila()
{

}

template<class T>
void Pila<T>::setdato(T dato)
{
    Pila<T> *n=new Pila<T>();
    n->setdato(dato);
    n->setlink(this->link);
    this->link=n;
    n=NULL;

}

template<class T>
void Pila<T>::setlink(Pila *link)
{
    this->link=link;
}

template<class T>
T Pila<T>::getdato()
{
    Pila<T> *anterior;
    anterior=this->link;
    T aux=link->dato;
    link=link->link;
    delete anterior;
    return aux;
}


