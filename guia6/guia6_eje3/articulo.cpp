#include "articulo.h"

Articulo::Articulo()
{

}

void Articulo::setdescription(char *a)
{
    this->description=a;
}

char *Articulo::getdescription()
{
    return this->description;
}

void Articulo::setprecio(float b)
{
    this->precio=b;
}

float Articulo::getprecio()
{
    return this->precio;
}
