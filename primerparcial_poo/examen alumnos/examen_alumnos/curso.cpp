#include "curso.h"

Curso::Curso()
{

}

void Curso::setalumno(Alumno a)
{
    if(cantalumno<30){
        this->vec[cantalumno]=&a;
         this->cantalumno++;
    }else{
        std::cout<<"curso lleno"<<std::endl;
    }

}

void Curso::mosrtrarcursocondiciones()
{
    for(int i=0;i<this->cantalumno;i++){
       std::cout<<"Alumno"<<i<<": "<<this->vec[i]->getnombre()<<this->vec[i]->getcondicion()<<std::endl;
    }
}
