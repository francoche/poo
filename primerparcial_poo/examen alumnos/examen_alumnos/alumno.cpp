#include "alumno.h"

Alumno::Alumno()
{

}

void Alumno::setnombre(char *a)
{
    this->nombre=a;
}

void Alumno::setapellido(char *a)
{
    this->apellido=a;
}

void Alumno::setmail()
{
    char*aux="@uader.edu.ar";
    int j=0;
    char*maeil=new char[15];
    maeil[0]=this->nombre[0];
    maeil[1]=this->apellido[0];
    for(int i=2;i<15;i++){
        maeil[i]=aux[j];
        j++;

    }
    this->meil=maeil;
}

void Alumno::setdni(int a)
{
    this->dni=a;
}

void Alumno::setnotafinal(int a)
{
    this->notafinal=a;
}

char *Alumno::getnombre()
{
    return this->nombre;
}

char *Alumno::getapellido()
{
    return this->apellido;
}

int Alumno::getdni()
{
    return this->dni;
}

char *Alumno::getcondicion()
{
    return this->condicion;
}

char *Alumno::mosrtarcondicion()
{

}
