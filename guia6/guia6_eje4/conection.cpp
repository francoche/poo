#include "conection.h"
#include<iostream>
Conection::Conection()
{

}

void Conection::set_nombre(char *a)
{
    this->nombre=a;
}

char *Conection::get_nombre()
{
    return this->nombre;
}

void Conection::set_relacion(Conection &b, char *relacion)
{


    if(this->cant_rel==0){
        this->cant_rel++;
        Conection*vec=new Conection[this->cant_rel];
        vec[this->cant_rel-1].nombre_relacion=b.get_nombre();
        vec[this->cant_rel-1].relacion=relacion;
        this->vector=vec;

        /*Conection*vec2=new Conection[this->cant_rel];
        vec2[b.cant_rel-1].nombre_relacion=this->nombre;
        vec2[b.cant_rel-1].relacion=relacion;
        b.vector=vec2;*/
        b.actualizacion(this->nombre,relacion);
    }else{
        this->cant_rel++;
        Conection*vec=new Conection[this->cant_rel];
        for(int i=0;i<this->cant_rel-1;i++){
            vec[i]=this->vector[i];
        }
        vec[this->cant_rel-1].nombre_relacion=b.get_nombre();
        vec[this->cant_rel-1].relacion=relacion;
        delete [] this->vector;
        this->vector=vec;

        /*Conection*vec2=new Conection[b.cant_rel];
        for(int i=0;i<b.cant_rel-1;i++){
            vec2[i]=b.vector[i];
        }
        vec2[b.cant_rel-1].nombre_relacion=this->nombre;
        vec2[b.cant_rel-1].relacion=relacion;
        delete b.vector;
        b.vector=vec2;*/

        b.actualizacion(this->nombre,relacion);

    }



}

char *Conection::get_nombre_relacion()
{
    return this->nombre_relacion;
}

char *Conection::get_rel()
{
    return this->relacion;
}


void Conection::actualizacion(char *a, char *relacion)
{
    if(this->cant_rel==0){
        this->cant_rel++;
        Conection*vec=new Conection[this->cant_rel];
        vec[this->cant_rel-1].nombre_relacion=a;
        vec[this->cant_rel-1].relacion=relacion;
        delete [] this->vector;
        this->vector=vec;

    }else{
        this->cant_rel++;
        Conection*vec=new Conection[this->cant_rel];
        for(int i=0;i<this->cant_rel-1;i++){
            vec[i]=this->vector[i];
        }
        vec[this->cant_rel-1].nombre_relacion=a;
        vec[this->cant_rel-1].relacion=relacion;
        delete [] this->vector;
        this->vector=vec;
    }
}

void Conection::get_relacion()
{
    for(int i=0;i<this->cant_rel;i++){
      std::cout<<this->cant_rel<<this->get_nombre()<<" se relacion con "<<this->vector[i].get_nombre_relacion()<<"son "<<this->vector[i].get_rel()<<std::endl;
    }

}
