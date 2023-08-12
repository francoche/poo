#include "avocacionales.h"

Avocacionales::Avocacionales()
{

}

char* Avocacionales::mosrtarcondicion()
{
  if(this->notafinal>=70){
      this->condicion="aprobado";
  }else{
      this->condicion="desaprobado";
  }
  return this->condicion;
}

std::ostream& operator<<(std::ostream& os, const Avocacionales& obj){
    return os<<"nombre: "<<obj.nombre<<"apellido: "<<obj.apellido<<"dni: "<<obj.dni<<"condicion: "<<obj.condicion<<"meil: "<<obj.meil;
}
