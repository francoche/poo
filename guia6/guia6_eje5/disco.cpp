#include "disco.h"
#include <iostream>
disco::disco()
{
    this->cant_canciones=0;
}

void disco::meter_cancion(cancion a)
{
    if(this->cant_canciones==0){
        this->cant_canciones++;
        cancion *n=new cancion[this->cant_canciones];
        n[this->cant_canciones-1]=a;
        this->vector=n;
    }else{
        this->cant_canciones++;
        cancion *n=new cancion[this->cant_canciones];
        for(int i=0;i<this->cant_canciones-1;i++){
            n[i]=this->vector[i];
        }
        n[this->cant_canciones-1]=a;
        delete [] this->vector;
        this->vector=n;
    }
}

void disco::mostrar_disco()
{
    std::cout<<"disco: "<<this->nombre<<std::endl;
    for(int i=0;i<this->cant_canciones;i++){
        std::cout<<"cancion: "<<this->vector[i].get_nombre()<<" /autor: "<<this->vector[i].get_autor()<<std::endl;


    }
}
