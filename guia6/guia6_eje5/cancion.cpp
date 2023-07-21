#include "cancion.h"

cancion::cancion()
{

}

void cancion::set_nombre(char*a)
{
    this->nombre=a;
}

char *cancion::get_nombre()
{
    return this->nombre;
}

void cancion::set_autor(char *a)
{
    this->autor=a;
}

char *cancion::get_autor()
{
    return this->autor;
}


