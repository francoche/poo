#include "conjunto_ordenado.h"

Conjunto_ordenado::Conjunto_ordenado()
{

}

void Conjunto_ordenado::setelemento(int a)
{
    bool band=false;
    if(this->cantelemento==0){
        this->cantelemento++;
        int *n=new int[this->cantelemento];
        n[this->cantelemento-1]=a;
        this->vec=n;
    }
    else{
for(int i=0;i<this->cantelemento;i++ ){
        if(this->vec[i]==a){
            band=true;
            i=this->cantelemento;
        }
    }
        if(band==false){
                this->cantelemento++;
                int *n=new int[this->cantelemento];
                for(int i=0;i<this->cantelemento-1;i++ ){
                    n[i]=this->vec[i];
                    }
                n[this->cantelemento-1]=a;
                delete [] this->vec;
                this->vec=n;
            }
        int aux;
        for(int i=0;i<this->cantelemento-1;i++){
            for(int j=(i+1);j<this->cantelemento;j++){
                if(this->vec[i]>this->vec[j]){
                    aux=this->vec[i];
                    this->vec[i]=this->vec[j];
                    this->vec[j]=aux;

                }
            }
        }
        }
    }

