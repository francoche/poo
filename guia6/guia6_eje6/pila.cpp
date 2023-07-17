#include "pila.h"

Pila::Pila()
{
    this->cabeza=NULL;
}

void Pila::set_elemento(int dato)
{
    Pila*nnodo=new Pila();
    nnodo->dato=dato;
    nnodo->link=this->cabeza;
    this->cabeza=nnodo;
    nnodo=NULL;
}

void Pila::get_pila()
{
    Pila*anterio=this->cabeza;
    int aux=anterio->dato;
    this->cabeza=this->cabeza->link;
}


