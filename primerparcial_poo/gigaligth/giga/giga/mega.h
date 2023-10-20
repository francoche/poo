#ifndef MEGA_H
#define MEGA_H

#include "tarifa.h"

class Mega : public Tarifa
{
private:
    int cantmega;
public:
    Mega();
    void setcantmega(int a);
    int getcantmega();
    void setmontocobrar();
};

#endif // MEGA_H
