#ifndef AVOCACIONALES_H
#define AVOCACIONALES_H

#include "alumno.h"
#include <iostream>
class Avocacionales : public Alumno
{

public:
    Avocacionales();
    char* mosrtarcondicion();
    friend std::ostream& operator<<(std::ostream& os, const Avocacionales& obj);
};

#endif // AVOCACIONALES_H
