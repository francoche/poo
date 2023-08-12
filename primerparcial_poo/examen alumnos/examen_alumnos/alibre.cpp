#include "alibre.h"

Alibre::Alibre()
{

}

void Alibre::setejextra(bool a)
{
    this->ejextra=a;
}

char* Alibre::mosrtarcondicion()
{
    if(this->notafinal>=70 && this->ejextra==true){
        this->condicion="aprobado";
    }else{
        this->condicion="desaproado";
    }
    return this->condicion;
}


std::ostream& operator<<(std::ostream& os, const Alibre& obj){
    return os<<"nombre: "<<obj.nombre<<"apellido: "<<obj.apellido<<"dni: "<<obj.dni<<"condicion: "<<obj.condicion<<"meil: "<<obj.meil;;
}
