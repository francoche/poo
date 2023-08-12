#ifndef PAIS_H
#define PAIS_H

#include "area.h"
#include "provincia.h"

class Pais : public Area
{
private:
   int cant_prov=0;
   Provincia *provicnias;
public:
    Pais();
    void set_provincias(Provincia a);

};

#endif // PAIS_H
