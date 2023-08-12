#include <iostream>
#include "pila.h"
using namespace std;

int main()
{
    Pila a;
    a.setnodo(5);
    a.setnodo(6);
    int aux=a.get();
    cout<<endl;
    cout<<aux;
    aux=a.get();
    cout<<endl;
    cout<<aux;
    aux=a.get();
    aux=a.get();
    a.setnodo(30);
    aux=a.get();
    cout<<endl;
    cout<<aux;


    return 0;
}
