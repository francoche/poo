#include <iostream>
#include "grupo.h"
#include "pagweb.h"
using namespace std;

int main()
{
    Persona a;
    Persona b;
    Persona c;

    a.set_nombre("juan");
    b.set_nombre("pedro");
    c.set_nombre("sofia");

    a.set_relacion(b,"amigos");
    c.set_relacion(a,"familia");

    //a.mostrar_relaciones();

    Grupo taxistas;
    taxistas.set_nombre("taxistas de parana");
    taxistas.set_usuario(a);
    taxistas.set_usuario(b);
    taxistas.mostrar_usuarioss();
    //a.mostrar_relaciones();

    Pagweb facebook;
    facebook.set_nombre("facebook");
    facebook.set_usuario(a);
    a.mostrar_relaciones();


}
