#include <iostream>
#include "pais.h"

using namespace std;

int main()
{
    Ciudad a;
    a.set_nombre("parana");
    a.set_poblacion(100);
    a.setcodigo();
    //cout<<a;

    Ciudad b;
    b.set_nombre("santa Fe");
    b.set_poblacion(100);


    Departamento c;
    c.set_ciudades(a);
    c.set_ciudades(b);
    //c.getciudades();
    c.borrarciudad(a);
    c.getciudades();


    /*Departamento e;
    e.set_ciudades(a);
    e.set_ciudades(b);


    Provincia d;
    d.set_dto(c);
    d.set_dto(e);


    Provincia f;
    f.set_dto(c);
    f.set_dto(e);

    Pais z;
    z.set_provincias(d);
    z.set_provincias(f);
    cout<<z.get_poblacion();*/






}
