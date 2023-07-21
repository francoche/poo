#ifndef TIEMPO_H
#define TIEMPO_H


class Tiempo
{
private:
    int seg=0;
public:

    Tiempo();
    void aumentar();
    void reset ();
    int get_seg();
};

#endif // TIEMPO_H
