#ifndef GIGALIGTH_H
#define GIGALIGTH_H

#include "tarifa.h"
#include <iostream>
class gigaligth : public Tarifa
{
private:
Tarifa vec[10];
int cont;
public:
    gigaligth();
    void settarifas(Tarifa a);
    void mostrar();
};

#endif // GIGALIGTH_H
