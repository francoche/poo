#ifndef ALIBRE_H
#define ALIBRE_H

#include "alumno.h"
#include <iostream>
class Alibre : public Alumno
{
private:
    bool ejextra=false;
public:
    Alibre();
    void setejextra(bool a);
    char* mosrtarcondicion();
    friend std::ostream& operator<<(std::ostream& os, const Alibre& obj);
};

#endif // ALIBRE_H
