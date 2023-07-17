#include "curso.h"
#include <iostream>




Curso::Curso(char *nombree)
{
    this->nombree=nombree;
}

char *Curso::getnombre()
{
    return this->nombree;
}



void Curso::setalumno(Alumno a)
{
    this->alumnos[this->poss]=a;
    this->poss++;
}

void Curso::mostrarcurso()
{
     for(int i=0;i<poss;i++){
         std::cout<<"alumno: "<<this->alumnos[i].getnombre()<<" promedio: "<<this->alumnos[i].promedio()<<std::endl;
     }
}
