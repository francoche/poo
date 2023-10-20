#ifndef PROBANDO_H
#define PROBANDO_H
#include <iostream>
template <class  T >

class Probando
{
private:
    int cont=0;
    T *vec;
public:
    Probando();
    void setvec(T dato);
    void mostrarvect();


};

#endif // PROBANDO_H
