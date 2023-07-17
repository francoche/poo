#ifndef CUMPLEANIO_H
#define CUMPLEANIO_H
#include "amigo.h"

class Cumpleanio
{
private:
    int numero_amigos;
    Amigo *fechas;
public:
    Cumpleanio();
    void setvec(Amigo a);
    void mostrar_amigos();
};

#endif // CUMPLEANIO_H
