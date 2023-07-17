#ifndef CURSO_H
#define CURSO_H


#include "alumno.h"

class Curso
{
private:
    Alumno alumnos[20];
    char *nombree;
    int poss=0;
public:
    Curso(char * nombree);
    char * getnombre();
    void setalumno(Alumno a);
    void mostrarcurso();
};

#endif // CURSO_H
