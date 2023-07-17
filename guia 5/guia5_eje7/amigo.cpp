#include "amigo.h"

Amigo::Amigo()
{

}

void Amigo::setnombre(char *nombre)
{
    this->nombre=nombre;
}

void Amigo::setfecha(char* fecha)
{
    this->fecha=fecha;
}

char *Amigo::getnombre()
{
    return this->nombre;
}

char *Amigo::getfecha()
{
    return this->fecha;
}
