#ifndef CURSO_H
#define CURSO_H

#include "alumno.h"
#include <iostream>
class Curso : public Alumno
{
private:
    int cantalumno=0;
    Alumno**vec=new Alumno*[30];
public:
    Curso();
    void setalumno(Alumno a);
    void mosrtrarcursocondiciones();
};

#endif // CURSO_H
