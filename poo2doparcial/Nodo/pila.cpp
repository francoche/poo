#include "pila.h"



template<class T>
Pila<T>::Pila()
{

}

template<class T>
void Pila<T>::setnodo(T dato)
{
   Nodo<T>*nnodo=new Nodo<T>;
   nnodo->setdato(dato);
   nnodo->setlink(this->pila);
   this->pila=nnodo;
   nnodo=NULL;
}

template<class T>
T Pila<T>::get()
{
    if(pila!=NULL){
    Nodo<T>*anterior;
    anterior=this->pila;
    T aux=pila->getdato();
    pila=pila->getlink();
    delete anterior;
    return aux;}
    else{
        std::cout<<"pila vacia"<<std::endl;
    }

}
