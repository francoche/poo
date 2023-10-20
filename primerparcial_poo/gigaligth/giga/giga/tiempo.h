#ifndef TIEMPO_H
#define TIEMPO_H

#include "tarifa.h"

class Tiempo : public Tarifa
{
private:
    int tiempo_uso;
public:
    Tiempo();
    void settimeuse(int a);
    int gettimeuse();
    void setmontocobrar();
};

#endif // TIEMPO_H
