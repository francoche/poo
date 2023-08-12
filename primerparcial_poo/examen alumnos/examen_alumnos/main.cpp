#include <iostream>
#include "alumno.h"
#include "anormal.h"
#include "alibre.h"
#include "curso.h"
using namespace std;

int main()
{
    Anormal a;
    a.setnombre("raul");
    a.setapellido("gonsalez");
    a.setdni(43292992);
    a.setnota1(30);
    a.setnota2(40);
    a.setnota3(100);
    a.setnotafinal(100);
    a.mosrtarcondicion();
    a.setmail();
    cout<<a;
    cout<<endl;
    Alibre b;
    b.setnombre("sofia");
    b.setapellido("sanchez");
    b.setdni(43292993);
    b.setnotafinal(70);
    b.mosrtarcondicion();
    b.setmail();
    cout<<b;
    cout<<endl;

    Alibre e;
    e.setnombre("german");
    e.setapellido("lopez");
    e.setdni(43292992);
    e.setnotafinal(60);
    e.setejextra(true);
    e.mosrtarcondicion();
    e.setmail();
    cout<<e;
    cout<<endl;
    Curso c;
    c.setalumno(a);
    c.setalumno(b);
    c.setalumno(e);
    c.mosrtrarcursocondiciones();

}
