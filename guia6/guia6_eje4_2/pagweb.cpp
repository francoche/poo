#include "pagweb.h"

Pagweb::Pagweb()
{

}

void Pagweb::set_usuario(Persona &a)
{
    a.actualizacion(this->nombre,"usuario recurrente");
}
