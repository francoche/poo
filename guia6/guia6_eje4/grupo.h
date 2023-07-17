#ifndef GRUPO_H
#define GRUPO_H

#include "conection.h"

class Grupo : public Conection
{
private:
    int mienbros=0;
    Conection*usuarios;
public:
    Grupo();
    void set_nombre(char*a);
    void set_usuario(Conection &a);
    void mostrar_usuarios();
    void mostrar_relacione();
};

#endif // GRUPO_H
