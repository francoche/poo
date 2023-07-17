#include <iostream>

#include "grupo.h"
using namespace std;

int main()
{
    Conection a;
    Conection b;
    Conection c;
    Conection d;


    a.set_nombre("juan");
    b.set_nombre("pedro");
    c.set_nombre("sofia");
    d.set_nombre("raul");


    a.set_relacion(b,"familia");
    c.set_relacion(a,"amigo");
    d.set_relacion(a,"best-friends");
    //a.get_relacion();

    Grupo facebook;
    facebook.set_nombre("facebook");
    facebook.set_usuario(a);
    facebook.set_usuario(b);
    facebook.set_usuario(c);
    facebook.mostrar_usuarios();
    a.get_relacion();
    c.get_relacion();
    return 0;
}
