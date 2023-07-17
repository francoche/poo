#include "nodo.h"

Nodo::Nodo()
{

}

void Nodo::set_numero(int a)
{
    this->dato=a;
}

void Nodo::set_link(Nodo *link)
{
    this->link=link;
}

int Nodo::get_numero()
{
    return this->dato;
}

Nodo *Nodo::get_link()
{
    return this->link;
}
