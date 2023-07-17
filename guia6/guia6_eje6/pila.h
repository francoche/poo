#ifndef PILA_H
#define PILA_H
#include<iostream>
#include "nodo.h"

class Pila : public Nodo
{
private:
    Pila* cabeza;
public:
    Pila();
    void set_elemento(int dato);
    void get_pila();
};

#endif // PILA_H
