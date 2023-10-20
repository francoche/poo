#ifndef MIXTA_H
#define MIXTA_H

#include "tarifa.h"

class Mixta : public Tarifa
{
private:
    int usot;
    int usom;
public:
    Mixta();
    void setusomt(int a,int b);
    void setmontocobrar();
};

#endif // MIXTA_H
