#include "anormal.h"

Anormal::Anormal()
{

}

void Anormal::setnota1(int a)
{
    this->nota[0]=a;
}

void Anormal::setnota2(int a)
{
    this->nota[1]=a;
}

void Anormal::setnota3(int a)
{
    this->nota[2]=a;
}

char* Anormal::mosrtarcondicion()
{
    float promedio=0;
    for(int i=0;i<3;i++){
        promedio+=this->nota[i];
    }
    if(promedio>=60 && this->notafinal>60){
        this->condicion="aprobado";
    }
    else{
       this->condicion="desaprobado";
    }
    return this->condicion;
}

std::ostream& operator<<(std::ostream& os, const Anormal& obj){
    return os<<"nombre: "<<obj.nombre<<"apellido: "<<obj.apellido<<"dni: "<<obj.dni<<"condicion: "<<obj.condicion<<"meil: "<<obj.meil;
}
