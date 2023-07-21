#ifndef DISCO_H
#define DISCO_H

#include "cancion.h"

class disco : public cancion
{
private:
    int cant_canciones;
    cancion*vector;
public:
    disco();
    void meter_cancion(cancion a);
    void mostrar_disco();

};

#endif // DISCO_H
