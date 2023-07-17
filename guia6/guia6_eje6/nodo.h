#ifndef NODO_H
#define NODO_H


class Nodo
{
protected:
    Nodo* cabeza;
    int dato;
    Nodo*link;
public:
    Nodo();
    void set_numero(int a);
    void set_link(Nodo*link);
    int get_numero();
    Nodo* get_link();
};

#endif // NODO_H
