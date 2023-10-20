#ifndef PILA_H
#define PILA_H
#include <iostream>

template <class T>
class Pila
{
private:
    T dato;
    Pila<T> *link=NULL;
public:
    Pila();
    void setdato(T dato);
    void setlink(Pila<T> *link);
    T getdato();
    Pila* getlink();
};

#endif // PILA_H
