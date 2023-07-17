#ifndef GASTO_H
#define GASTO_H


class Gasto
{
private:
    float gast;
    char *descripcion;
public:
    Gasto();
    void setdescription(char*d);
    char virtual *  getdescription();
    void  setgasto(float v);
    float  getgasto();

};

#endif // GASTO_H
