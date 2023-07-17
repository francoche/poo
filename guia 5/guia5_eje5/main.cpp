#include <iostream>

#include "curso.h"
using namespace std;

int main()
{
    Alumno juan;
    juan.setnombre("juan");
    juan.setnota1(5);
    juan.setnota2(5);
    juan.setnota3(5);
    juan.setnota4(5);

    Alumno ector;
    ector.setnombre("ector");
    ector.setnota1(5);
    ector.setnota2(10);
    ector.setnota3(20);
    ector.setnota4(30);


    Alumno sofia;
    sofia.setnombre("sofia");
    sofia.setnota1(5);
    sofia.setnota2(3);
    sofia.setnota3(4);
    sofia.setnota4(9);

    Curso a("primero");
    cout<<a.getnombre()<<endl;
    a.setalumno(sofia);
    a.setalumno(juan);
    a.setalumno(ector);
    a.mostrarcurso();



    return 0;

}
