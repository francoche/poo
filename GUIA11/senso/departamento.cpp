#include "departamento.h"

Departamento::Departamento()
{

}

void Departamento::set_ciudades(Ciudad a)
{
    bool aux=busqueda_ciudad(a);
    if(aux==false){
        if(this->cant_ciud==0){
            this->cant_ciud++;
            Ciudad *n=new Ciudad[this->cant_ciud];
            n[0]=a;
            this->ciudades=n;
            this->poblacion=this->poblacion+a.get_poblacion();
        }else{
            this->cant_ciud++;
            Ciudad *n=new Ciudad[this->cant_ciud];
            for(int i=0;i<this->cant_ciud-1;i++){
                n[i]=this->ciudades[i];
            }
            n[this->cant_ciud-1]=a;
            delete [] this->ciudades;
            this->ciudades=n;
            this->poblacion=this->poblacion+a.get_poblacion();
        }
    }

}

bool Departamento::busqueda_ciudad(Ciudad a)
{
    if(this->cant_ciud!=0){
        for(int i=0;i<this->cant_ciud;i++){
            if(this->ciudades[i].get_nombre()==a.get_nombre()){
                std::cout<<"la ciudad "<<a.get_nombre()<<" ya esta ingresada"<<std::endl;
                return true;
            }
    }
}
    return false;
}
void Departamento::borrarciudad(Ciudad a)
{
    int pos; bool band=false;int j=0;
    if(this->cant_ciud!=0){
        for(int i=0;i<this->cant_ciud;i++){
            if(this->ciudades[i].get_nombre()==a.get_nombre()){
                band=true;
                pos=i;

            }
    }
    if(band==true){
        this->cant_ciud--;
       Ciudad *n=new Ciudad[this->cant_ciud];
       for(int i=0;i<this->cant_ciud+1;i++){
           if(i!=pos){
               n[j]=this->ciudades[i];
               j++;
           }
       }
       delete [] this->ciudades;
       this->ciudades=n;
    }

    }
}

void Departamento::getciudades()
{
    for(int i=0;i<this->cant_ciud;i++){
        std::cout<<"ciudad "<<this->ciudades[i].get_nombre()<<std::endl;
    }
}
