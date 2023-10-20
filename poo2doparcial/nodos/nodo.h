#ifndef NODO_H
#define NODO_H
#include <iostream>
template <class T >
class Nodo
{
protected:
    T dato;
    Nodo*link=NULL;
public:
    Nodo();
    void setdato(T dato);
    void setlink(Nodo*link);
    T getdato();
    Nodo* getlink();
};

#endif // NODO_H
