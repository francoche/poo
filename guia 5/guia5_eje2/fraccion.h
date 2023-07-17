#ifndef FRACCION_H
#define FRACCION_H
#include <iostream>


class Fraccion
{
private:
    int numerador;
    int denominador;
public:
    Fraccion(int numerador,int denominador=1);
    Fraccion suma(Fraccion other);
    Fraccion resta(Fraccion other);
    Fraccion multiplicacion(Fraccion other);
    Fraccion divicion(Fraccion other);
    Fraccion simplificar();
    int getnumerador();
    int getdenominador();

};

#endif // FRACCION_H
