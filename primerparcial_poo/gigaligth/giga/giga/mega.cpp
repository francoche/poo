#include "mega.h"

Mega::Mega()
{

}

void Mega::setcantmega(int a)
{
    this->cantmega=a;
}

int Mega::getcantmega()
{
    return this->cantmega;
}

void Mega::setmontocobrar()
{
    this->montoacobrar=this->cantmega*this->consimo_x_mega;
}
