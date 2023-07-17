#ifndef ARTICULO_H
#define ARTICULO_H


class Articulo
{
private:
   char *description;
   float precio;
public:
    Articulo();
    void setdescription(char*a);
    char* getdescription();
    void setprecio(float b);
    float getprecio();

};

#endif // ARTICULO_H
