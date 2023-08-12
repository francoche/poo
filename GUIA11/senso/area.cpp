#include "area.h"

Area::Area()
{

}

void Area::set_nombre(char*a)
{
    this->nombre=a;
}

void Area::set_poblacion(int a)
{
    this->poblacion=this->poblacion+a;
}

char* Area::get_nombre()
{
    return this->nombre;
}

int Area::get_poblacion()
{
    return this->poblacion;
}


