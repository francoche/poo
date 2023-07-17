#include "usuario.h"

Usuario::Usuario()
{

}

void Usuario::set_nombre(char *nombre)
{
    this->nombre=nombre;
}

char *Usuario::get_nombre()
{
    return this->nombre;
}
