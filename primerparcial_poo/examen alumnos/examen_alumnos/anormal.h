#ifndef ANORMAL_H
#define ANORMAL_H

#include "alumno.h"
#include <iostream>
class Anormal : public Alumno
{
private:
    int nota[3];
public:
    Anormal();
    void setnota1(int a);
    void setnota2(int a);
    void setnota3(int a);
    char* mosrtarcondicion();
    friend std::ostream& operator<<(std::ostream& os, const Anormal& obj);


};

#endif // ANORMAL_H
