#include <iostream>
#include "fraccion.h"

using namespace std;

int main()
{
    Fraccion f1(5,4);
    Fraccion f2(3,5);
    Fraccion multi=f1.multiplicacion(f2);
    multi=multi.simplificar();

    cout<<multi.getnumerador()<<'/'<<multi.getdenominador();


}
