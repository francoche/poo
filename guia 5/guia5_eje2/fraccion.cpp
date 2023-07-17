#include "fraccion.h"
#include <iostream>
int MCD(int numerador,int denominador)
{
    if(numerador==0){
        return denominador;
    }else{
        return MCD(denominador%numerador,numerador);
    }
}
Fraccion::Fraccion(int numerador,int denominador)
{
    this->numerador=numerador;
    this->denominador=denominador;
}

Fraccion Fraccion::suma(Fraccion other)
{
    int numerador=(this->numerador*other.denominador)+(other.numerador*this->denominador);
    int denominador=this->denominador*other.denominador;
    return Fraccion(numerador,denominador);
}

Fraccion Fraccion::resta(Fraccion other)
{
    int numerador=((this->numerador*other.denominador)-(other.numerador*this->denominador));
    int denominador=this->denominador*other.denominador;
    return Fraccion(numerador,denominador);}

Fraccion Fraccion::multiplicacion(Fraccion other)
{
    int numerador=this->numerador*other.numerador;
    int denominador=this->denominador*other.denominador;
    return Fraccion(numerador,denominador);
}

Fraccion Fraccion::divicion(Fraccion other)
{
    int numerador=this->numerador*other.denominador;
    int denominador=this->denominador*other.numerador;
    return Fraccion(numerador,denominador);
}

Fraccion Fraccion::simplificar()
{
    int numerador=this->numerador;
    int denominador=this->denominador;
    int mcd=MCD(numerador,denominador);
    if(this->numerador%mcd==0 && this->denominador%mcd==0){
        numerador=this->numerador/mcd;
        denominador=this->denominador/mcd;
        return Fraccion(numerador,denominador);
    }else{
        return Fraccion(numerador,denominador);;
    }

}

int Fraccion::getnumerador()
{
    return this->numerador;
}
int Fraccion::getdenominador()
{
    return this->denominador;
}




