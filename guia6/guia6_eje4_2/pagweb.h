#ifndef PAGWEB_H
#define PAGWEB_H
#include "persona.h"
#include "usuario.h"

class Pagweb : public Usuario
{
public:
    Pagweb();
    void set_usuario(Persona &a);
};

#endif // PAGWEB_H
