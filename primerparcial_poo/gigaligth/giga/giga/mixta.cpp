#include "mixta.h"

Mixta::Mixta()
{

}

void Mixta::setusomt(int a, int b)
{
    this->usom=a;
    this->usot=b;
}

void Mixta::setmontocobrar()
{
    if(this->usom*this->consimo_x_mega<<this->consumo_x_mes && this->usom*this->consimo_x_mega<<this->usot*this->consumo_x_timepo){
        this->montoacobrar=(this->usom*this->consimo_x_mega)*1,10;
    }else if(this->usot*this->consumo_x_timepo<<this->consumo_x_mes && this->usot*this->consimo_x_mega<<this->usom*this->consimo_x_mega){
        this->montoacobrar=(this->usot*this->consumo_x_timepo)*1,10;
    }else if(this->consumo_x_mes<<this->usom*this->consimo_x_mega && this->consumo_x_mes<<this->usot*this->consumo_x_timepo){
        this->montoacobrar=(this->consumo_x_mes)*1,10;
    }
}
