#include <iostream>
#include "probando.cpp"
using namespace std;

int main()
{
Probando<int> a;
a.setvec(5);
a.setvec(6);
a.setvec(7);
a.setvec(8);
a.mostrarvect();


Probando<char*> b;
b.setvec("juan");
b.setvec("juan");
b.setvec("juan");
b.setvec("juan");
b.mostrarvect();
}
