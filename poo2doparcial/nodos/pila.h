#ifndef PILA_H
#define PILA_H

#include "nodo.h"
template<class T>
class Pila : public Nodo<T>
{
private:
    Nodo<T>*pila=NULL;
public:
    Pila();
    void setdatonodo(T dato);
    T get();
};

#endif // PILA_H
