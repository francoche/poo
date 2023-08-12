#ifndef AREA_H
#define AREA_H


class Area
{
protected:
    char* nombre;
    int poblacion=0;
public:
    Area();
    void set_nombre(char*a);
    void virtual set_poblacion(int a);
    char* get_nombre();
    int get_poblacion();

};

#endif // AREA_H
