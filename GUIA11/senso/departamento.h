#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include "area.h"
#include "ciudad.h"
#include <iostream>
class Departamento : public Area
{
private:
    int cant_ciud=0;
    Ciudad *ciudades;
public:
    Departamento();
    //void set_poblacion(int a);
    void set_ciudades(Ciudad a);
    bool busqueda_ciudad(Ciudad a);
    void borrarciudad(Ciudad a);
    void getciudades();

};

#endif // DEPARTAMENTO_H
