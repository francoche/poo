#include "cumpleanio.h"
#include "amigo.h"
#include <iostream>

Cumpleanio::Cumpleanio()
{

    this->numero_amigos=0;

}

void Cumpleanio::setvec(Amigo a)
{
    if(this->numero_amigos==0){
        this->numero_amigos++;
        Amigo *n=new Amigo[this->numero_amigos];
        n[this->numero_amigos-1]=a;
        this->fechas=n;
    }else{
        this->numero_amigos++;
        Amigo *n=new Amigo[this->numero_amigos];
        for(int i=0;i<this->numero_amigos-1;i++){

            n[i]=this->fechas[i];
        }

        n[this->numero_amigos-1]=a;
        delete []this->fechas;
        this->fechas=n;

    }
}

void Cumpleanio::mostrar_amigos()
{
    for(int i=0;i<this->numero_amigos;i++){

        std::cout<<"nombre: "<<this->fechas[i].getnombre()<<" fecha cumple: "<<this->fechas[i].getfecha()<<std::endl;
    }
    delete [] this->fechas;
}

