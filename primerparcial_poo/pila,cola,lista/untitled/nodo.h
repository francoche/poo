#ifndef NODO_H
#define NODO_H
#include <iostream>

class Nodo
{
protected:
    int dato;
    Nodo*link=NULL;
public:
    Nodo();
    void virtual setnodo(int a);
    void setdato(int a);
    int getdato();
    Nodo*getlink();
    void setlink(Nodo*link);
    int virtual get();
    void virtual mostrarnodo();
};

#endif // NODO_H
