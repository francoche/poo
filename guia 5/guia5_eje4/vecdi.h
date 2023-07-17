#ifndef VECDI_H
#define VECDI_H
#include <iostream>

class Vecdi
{
private:
    int cant;
    int *vec;
public:
    Vecdi(int *vec,int cant);
    int cant_elementos();
    void setelementos(int elemento);
    void getelementos();
    int get_un_elemento();
    void remover_elemento();
    int promedio();
    int mayor_elemento();
    int menor_elemento();
    void operator+(int elemento);
    void operator-(int a);
    friend std::ostream& operator<<(std::ostream& os, const int& vec);
};

#endif // VECDI_H
