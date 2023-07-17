#include <iostream>
#include "cumpleanio.h"
using namespace std;

int main()
{
    Amigo juan;
    juan.setnombre("juan");
    juan.setfecha("16/03/2001");

    Amigo ector;
    ector.setnombre("ector");
    ector.setfecha("16/03/2002");

    Amigo sofia;
    sofia.setnombre("sofia");
    sofia.setfecha("16/03/2004");



    Cumpleanio a;
    a.setvec(juan);
    a.setvec(ector);
     a.setvec(sofia);
    a.mostrar_amigos();
}
