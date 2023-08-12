#include "alumnoe.h"

Alumnoe::Alumnoe()
{

}

void Alumnoe::setnota(int a)
{
   if(cantnotas==0){
       this->cantnotas++;
       int *n=new int[this->cantnotas];
       n[0]=a;
       this->notas=n;
   } else{
       this->cantnotas++;
       int *n=new int[this->cantnotas];
       for(int i=0;i<this->cantnotas-1;i++){
           n[i]=this->notas[i];
       }
       n[this->cantnotas-1]=a;
       delete [] this->notas;
       this->notas=n;

   }
}

void Alumnoe::getnotas()
{
    for(int i=0;i<this->cantnotas;i++){
        std::cout<<this->notas[i]<<std::endl;
    }
}

void Alumnoe::eliminarnota(int a)
{
    if(this->cantnotas>=a){
        this->cantnotas--; int j=0;
        int *n=new int[this->cantnotas];
        for(int i=0;i<this->cantnotas+1;i++){
            if(i!=a){
            n[j]=this->notas[i];
            j++;
            }

        }
    }else{
        std::cout<<"nota no encontrada"<<std::endl;
    }
}

void Alumnoe::calpromedio()
{
    for(int i=0;i<this->cantnotas;i++){
        this->promedio=this->promedio+this->notas[i];
    }
    this->promedio=this->promedio/this->cantnotas;
}

std::ostream& operator<<(std::ostream& os, const Alumnoe& obj){
    return os<<"nombre: "<<obj.nombre<<"apellido: "<<obj.apellido<<"dni: "<<obj.dni<<"condicion: "<<obj.condicion<<"meil: "<<obj.meil;
}
