#include "tarifa.h"

Tarifa::Tarifa()
{

}

void Tarifa::setmontos(int a, int b, int c)
{
 this->consumo_x_timepo=a;
 this->consumo_x_mes=b;
 this->consimo_x_mega=c;
}

void Tarifa::setnumerocliente(int a)
{
    this->numerocliente=a;
}

void Tarifa::settipotarifa(char *a)
{
    this->tipotarifa=a;
}

void Tarifa::setmontocobrar()
{

}

int Tarifa::getmontocobrar()
{
   return this->montoacobrar;
}

int Tarifa::getmontoa()
{
    return this->consumo_x_timepo;
}

int Tarifa::getmontob()
{
    return this->consumo_x_mes;
}

int Tarifa::getmontoc()
{
    return this->consimo_x_mega;
}

int Tarifa::getcliente()
{
    return this->numerocliente;
}

char *Tarifa::gettipotarifa()
{
    return this->tipotarifa;
}
