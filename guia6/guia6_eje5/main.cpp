#include <iostream>
#include "disco.h"

using namespace std;

int main()
{
    disco a;
    a.set_nombre("alas en el viento");

    cancion b;
    b.set_nombre("llanto si ti");
    b.set_autor("jorge rojas");

    cancion c;
    c.set_nombre("llanto si tu cara");
    c.set_autor("jorge velez");

    a.meter_cancion(b);
    a.meter_cancion(c);
    a.mostrar_disco();


}
