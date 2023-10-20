#include "tiempo.h"

Tiempo::Tiempo()
{

}

void Tiempo::settimeuse(int a)
{
    this->tiempo_uso=a;
}

int Tiempo::gettimeuse()
{
    return this->tiempo_uso;
}

void Tiempo::setmontocobrar()
{
    this->montoacobrar=this->tiempo_uso*this->consumo_x_timepo;
}
