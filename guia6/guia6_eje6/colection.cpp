#include "colection.h"
#include <iostream>
Colection::Colection()
{

}

void Colection::eliminarelemento(int a)
{
    bool band=false;
    for(int i=0;i<this->cantelemento;i++){
        if(this->vec[i]==a){
           band=true;
           i=this->cantelemento;
        }
    }
    if(band==true){
        int j=0;
        this->cantelemento--;
        int *n=new int[this->cantelemento];
        for(int i=0;i<this->cantelemento+1;i++){
            if(this->vec[i]!=a){
                n[j]=this->vec[i];
                j++;

           }

        }
        //delete [] this->vec;
        this->vec=n;
    }
    }




void Colection::getvec()
{
    for(int i=0;i<this->cantelemento;i++){
        std::cout<<this->vec[i]<<" "<<std::ends;
    }
}
