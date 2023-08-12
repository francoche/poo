#ifndef PILA_H
#define PILA_H

#include "nodo.h"
#include <iostream>
class Pila : public Nodo
{
private:
    Nodo*tope;
    int tamanio;
public:
    Pila();
    void setnodo(int a);
    int get();
};

#endif // PILA_H
