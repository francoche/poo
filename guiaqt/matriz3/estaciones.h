#ifndef ESTACIONES_H
#define ESTACIONES_H


class Estaciones
{
private:
    int cant_estaciones=0;
    int tipo_estacion;
    int row;
    int col;
    char*nombre;
    Estaciones *vec;
public:
    Estaciones();
    void setdatos(int a, int b, int c);
    int geta();
    int getb();
    int getc();
};

#endif // ESTACIONES_H
