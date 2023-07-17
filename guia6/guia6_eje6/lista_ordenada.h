#ifndef LISTA_ORDENADA_H
#define LISTA_ORDENADA_H

#include "lista.h"

class Lista_ordenada //: public Lista
{
private:
    Lista_ordenada* cabeza=NULL;
    int dato;
    Lista_ordenada *link;
public:
    Lista_ordenada();
    void set_lista(int dato);
    void get_lista();
};

#endif // LISTA_ORDENADA_H
