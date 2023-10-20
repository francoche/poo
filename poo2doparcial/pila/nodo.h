#ifndef NODO_H
#define NODO_H
#include <iostream>
template <class T>
class Nodo
{
protected:
    T dato;
    Nodo *link;

public:
    Nodo();
    void setdato(T dato);
    T sacardato();
    void setlink(Nodo *link);
    Nodo getlink();

};

#endif // NODO_H
