#include "ciudad.h"
#include <iostream>
Ciudad::Ciudad()
{

}

void Ciudad::set_poblacion(int a)
{
    this->poblacion=a;
}

void Ciudad::setcodigo()
{
    char * codigo=new char[3];
    for(int i=0;i<3;i++){
        codigo[i]=this->nombre[i];
    }
    for(int i=0;i<3;i++){
        codigo[i]=codigo[i]-32;
    }
    this->codigo=codigo;
}

std::ostream& operator<<(std::ostream& os, const Ciudad& c){
    return os<<"codigo "<<c.codigo;
}


