#ifndef GRUPO_H
#define GRUPO_H

#include "usuario.h"
#include "persona.h"

class Grupo : public Usuario
{
private:
    int mienbros=0;
    Persona*usuarios;
public:
    Grupo();
    void set_usuario(Persona &a);
    void mostrar_usuarioss();

};

#endif // GRUPO_H
