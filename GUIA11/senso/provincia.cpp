#include "provincia.h"

Provincia::Provincia()
{

}

void Provincia::set_dto(Departamento a)
{
    if(this->cant_dto==0){
        this->cant_dto++;
        Departamento *n=new Departamento[this->cant_dto];
        n[0]=a;
        this->departamentos=n;
        this->poblacion=this->poblacion+a.get_poblacion();
    }else{
        this->cant_dto++;
        Departamento *n=new Departamento[this->cant_dto];
        for(int i=0;i<this->cant_dto-1;i++){
            n[i]=this->departamentos[i];
        }
        n[this->cant_dto-1]=a;
        delete [] this->departamentos;
        this->departamentos=n;
        this->poblacion=this->poblacion+a.get_poblacion();
}
}
