#include "estaciones.h"

Estaciones::Estaciones()
{

}

/*void Estaciones::setdatos(int a, int b, int c)
{
    if(this->cant_estaciones==0){
        this->cant_estaciones++;
        Estaciones *n=new Estaciones[this->cant_estaciones];
        n[this->cant_estaciones-1].tipo_estacion=a;
        n[this->cant_estaciones-1].col=b;
        n[this->cant_estaciones-1].row=c;
        this->vec=n;
    }else{
        this->cant_estaciones++;
        Estaciones *n=new Estaciones[this->cant_estaciones];
        for(int i=0;i<this->cant_estaciones-1;i++){
            n[i]=this->vec[i];
        }
        n[this->cant_estaciones-1].tipo_estacion=a;
        n[this->cant_estaciones-1].col=b;
        n[this->cant_estaciones-1].row=c;
        delete [] this->vec;
        this->vec=n;
    }
}*/
void Estaciones::setdatos(int a, int b, int c)
{
    this->tipo_estacion=a;
    this->col=b;
    this->row=c;
}

int Estaciones::geta()
{
    return this->tipo_estacion;
}
int Estaciones::getb()
{
    return this->col;
}
int Estaciones::getc()
{
    return this->row;
}
