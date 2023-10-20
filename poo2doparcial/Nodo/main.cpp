#include <iostream>
#include "pila.cpp"
#include "nodo.cpp"
using namespace std;

int main()
{


    Pila<int> a;
    a.setnodo(5);
    a.setnodo(1);
    a.setnodo(3);

   int aux=a.get();
   cout<<aux;
   aux=a.get();
   cout<<aux;
   aux=a.get();
   cout<<aux;
   aux=a.get();


}
