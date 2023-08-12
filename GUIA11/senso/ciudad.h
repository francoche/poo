#ifndef CIUDAD_H
#define CIUDAD_H

#include "area.h"
#include <iostream>
class Ciudad : public Area
{
private:
char*codigo;
public:
    Ciudad();
    void set_poblacion(int a);
    void setcodigo();
    friend std::ostream& operator<<(std::ostream& os, const Ciudad& c);
};




#endif // CIUDAD_H
