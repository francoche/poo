#include <iostream>
#include "compra.h"
#include "extraordinario.h"
#include "servicio.h"
using namespace std;

int main()
{
    Compra a;
    a.setgasto(3000);
    a.setdescription("Gasto por compra de productos de limpieza");
    cout<<a.getdescription()<<".....................$"<<a.getgasto()<<endl;


    Servicio b;
    b.setgasto(2500);
    b.setdescription("Gasto por servicio de la compania ServiLimp");
    cout<<b.getdescription()<<".....................$"<<b.getgasto()<<endl;


    Extraordinario c;
    c.setgasto(100);
    c.setdescription("Gasto extraordinario Medialunas para la reunion");
    cout<<c.getdescription()<<".....................$"<<b.getgasto()<<endl;
    return 0;
}
