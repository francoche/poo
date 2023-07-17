#include <iostream>
#include "cadena.h"
using namespace std;

int main()
{
    Cadena p;
    p.setcadena("Hola");
    p=p.remover_pri_ocurrencia('o');
    cout<<p.getcadena()<<endl;
    p.mayuscula();
    cout<<p.getcadena()<<endl;



}
