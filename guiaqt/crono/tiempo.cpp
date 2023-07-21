#include "tiempo.h"

Tiempo::Tiempo()
{

}

void Tiempo::aumentar()
{
    this->seg++;
}

void Tiempo::reset()
{
    this->seg=0;
}

int Tiempo::get_seg()
{
    return this->seg;
}
