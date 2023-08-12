#ifndef PROVINCIA_H
#define PROVINCIA_H

#include "area.h"
#include "departamento.h"

class Provincia : public Area
{
private:
    int cant_dto=0;
    Departamento *departamentos;
public:
    Provincia();
    void set_dto(Departamento a);
};

#endif // PROVINCIA_H
