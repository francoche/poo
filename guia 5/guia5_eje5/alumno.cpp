#include "alumno.h"

Alumno::Alumno()
{

    for(int i =0; i < 4 ; i++) {
        this->nota[i] = 0;}
}

void Alumno::setnombre(char* nombre)
{
    this->nombre=nombre;
}

char *Alumno::getnombre()
{
    return this->nombre;
}

void Alumno::setnota1(float nota)
{
    this->nota[0]=nota;
}
void Alumno::setnota2(float nota)
{
    this->nota[1]=nota;
}
void Alumno::setnota3(float nota)
{
    this->nota[2]=nota;
}
void Alumno::setnota4(float nota)
{
    this->nota[3]=nota;
}

float Alumno::promedio()
{
    float promedio=0;
    for(int i=0;i<4;i++){
        promedio=promedio+this->nota[i];
    }
    promedio=promedio/4;
    return promedio;
}
