#include "vecdi.h"
#include <iostream>
Vecdi::Vecdi(int *vec,int cant)
{
    this->vec=vec;
    this->cant=cant;

}

int Vecdi::cant_elementos()
{
    return this->cant;
}

/*void Vecdi::setelementos(int elemento)
{

    this->cant++;
    int *n=new int[this->cant];
    for(int i=0;i<this->cant;i++){
        n[i]=this->vec[i];
    }
    n[this->cant-1]=elemento;
    delete []this->vec;
    this->vec=n;
}*/

void Vecdi::getelementos()
{
    for(int i=0;i<this->cant;i++){
        std::cout<<this->vec[i]<<std::ends;
    }
}

int Vecdi::get_un_elemento()
{
    return this->vec[1];
}

void Vecdi::remover_elemento()
{
    this->cant=this->cant-1;
    int *n=new int[this->cant];
    for(int i=0;i<this->cant;i++){
        n[i]=this->vec[i];
    }
    delete []this->vec;
    this->vec=n;
}

int Vecdi::promedio()
{
    int promedio=0;
    int cont=0;
    for(int i=0;i<this->cant;i++){
        promedio=promedio+this->vec[i];
        cont++;
    }
    promedio=promedio/cont;
    return promedio;
}

int Vecdi::mayor_elemento()
{
    int mayor=0;
    for(int i=0;i<this->cant;i++){
        if(this->vec[i]>mayor){
            mayor=this->vec[i];
        }
    }
    return mayor;
}

int Vecdi::menor_elemento()
{
    int menor=9999999;
    for(int i=0;i<this->cant;i++){
        if(this->vec[i]<menor){
            menor=this->vec[i];
        }
    }
    return menor;
}

void Vecdi::operator+(int elemento)
{
    this->cant++;
    int *n=new int[this->cant];
    for(int i=0;i<this->cant;i++){
        n[i]=this->vec[i];
    }
    n[this->cant-1]=elemento;
    delete []this->vec;
    this->vec=n;
}

void Vecdi::operator-(int a)
{
    int pos; bool band=false;
    for(int i=0;i<this->cant;i++){
        if(this->vec[i]==a){
            pos=i;
            i=this->cant;
            band=true;
        }
    }
    int j=0;
    if(band==true){
        this->cant=this->cant-1;
        int *n=new int[this->cant];
        for(int i=0;i<this->cant;i++){
            if(i!=pos){
                n[j]=this->vec[i];
                j++;
            }

        }
        delete []this->vec;
        this->vec=n;
    }

}

std::ostream& operator<<(std::ostream& os, const Vecdi& vec){
    return os <<vec.get_un_elemento;
}
