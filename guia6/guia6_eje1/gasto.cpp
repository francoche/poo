#include "gasto.h"

Gasto::Gasto()
{

}

void Gasto::setdescription(char *d)
{
    this->descripcion=d;
}

char *Gasto::getdescription()
{
    return this->descripcion;
}

void Gasto::setgasto(float v)
{
    this->gast=v;
}

float Gasto::getgasto()
{
    return this->gast;

}
