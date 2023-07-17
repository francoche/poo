#include "persona.h"
#include<iostream>
Persona::Persona()
{

}

void Persona::set_relacion(Persona &a, char *relacion)
{
    if(this->cant_rel==0){
        this->cant_rel++;
        Persona*vec=new Persona[this->cant_rel];
        vec[this->cant_rel-1].nombre_relacion=a.get_nombre();
        vec[this->cant_rel-1].relacion=relacion;
        this->vector=vec;


        a.actualizacion(this->nombre,relacion);
    }else{
        this->cant_rel++;
        Persona*vec=new Persona[this->cant_rel];
        for(int i=0;i<this->cant_rel-1;i++){
            vec[i]=this->vector[i];
        }
        vec[this->cant_rel-1].nombre_relacion=a.get_nombre();
        vec[this->cant_rel-1].relacion=relacion;
        delete [] this->vector;
        this->vector=vec;


        a.actualizacion(this->nombre,relacion);

    }
}

void Persona::actualizacion(char *a, char *relacion)
{
    if(this->cant_rel==0){
        this->cant_rel++;
        Persona*vec=new Persona[this->cant_rel];
        vec[this->cant_rel-1].nombre_relacion=a;
        vec[this->cant_rel-1].relacion=relacion;
        delete [] this->vector;
        this->vector=vec;

    }else{
        this->cant_rel++;
        Persona*vec=new Persona[this->cant_rel];
        for(int i=0;i<this->cant_rel-1;i++){
            vec[i]=this->vector[i];
        }
        vec[this->cant_rel-1].nombre_relacion=a;
        vec[this->cant_rel-1].relacion=relacion;
        delete [] this->vector;
        this->vector=vec;
    }
}

char *Persona::get_nombre_relacion()
{
    return this->nombre_relacion;
}

char *Persona::get_rel()
{
    return this->relacion;
}

void Persona::mostrar_relaciones()
{
    for(int i=0;i<this->cant_rel;i++){
      std::cout<<this->cant_rel<<this->get_nombre()<<" se relacion con "<<this->vector[i].get_nombre_relacion()<<"son "<<this->vector[i].get_rel()<<std::endl;
    }
}
