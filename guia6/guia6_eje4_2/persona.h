#ifndef PERSONA_H
#define PERSONA_H

#include "usuario.h"

class Persona : public Usuario
{
private:
    int cant_rel=0;
    char*relacion;
    char*nombre_relacion;
    Persona*vector;
public:
    Persona();
    void set_relacion(Persona &a,char*relacion);
    void actualizacion(char*a,char*realcion);
    char* get_nombre_relacion();
    char* get_rel();
    void mostrar_relaciones();
};

#endif // PERSONA_H
