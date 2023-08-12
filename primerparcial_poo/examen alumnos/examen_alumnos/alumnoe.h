#ifndef ALUMNOE_H
#define ALUMNOE_H

#include "alumno.h"
#include <iostream>
class Alumnoe : public Alumno
{
private:
    int*notas;
    int cantnotas=0;
    int promedio=0;
public:
    Alumnoe();
    void setnota(int a);
    void getnotas();
    void eliminarnota(int a);
    void calpromedio();
    friend std::ostream& operator<<(std::ostream& os, const Alumnoe& obj);

};

#endif // ALUMNOE_H
