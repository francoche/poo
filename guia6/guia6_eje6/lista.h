#ifndef LISTA_H
#define LISTA_H
#include <iostream>


class Lista //: public Nodo
{
protected:
    Lista* cabeza=NULL;
    int dato;
    Lista *link;
public:
    Lista();
    void set_lista(int dato);
    void borrar_lista(int dato);
    void get_lista();
};

#endif // LISTA_H
