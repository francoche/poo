#include "gigaligth.h"

gigaligth::gigaligth()
{
    this->cont=0;
}

void gigaligth::settarifas(Tarifa a)
{
    this->vec[this->cont]=a;
    this->cont++;
}

void gigaligth::mostrar()
{
    for(int i=0;i<this->cont;i++){
        std::cout<<vec[i].getcliente()<<" "<<vec[i].gettipotarifa()<<" "<<vec[i].getmontocobrar()<<std::endl;
    }
}
