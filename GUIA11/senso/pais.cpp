#include "pais.h"

Pais::Pais()
{

}

void Pais::set_provincias(Provincia a)
{
    if(this->cant_prov==0){
        this->cant_prov++;
        Provincia *n=new Provincia[this->cant_prov];
        n[0]=a;
        this->provicnias=n;
        this->poblacion=this->poblacion+a.get_poblacion();
    }else{
        this->cant_prov++;
       Provincia *n=new Provincia[this->cant_prov];
        for(int i=0;i<this->cant_prov-1;i++){
            n[i]=this->provicnias[i];
        }
        n[this->cant_prov-1]=a;
        delete [] this->provicnias;
        this->provicnias=n;
        this->poblacion=this->poblacion+a.get_poblacion();
}
}
