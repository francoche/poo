#ifndef CONECTION_H
#define CONECTION_H


class Conection
{
protected:
    int cant_rel=0;
    char*nombre;
    char*relacion;
    char*nombre_relacion;
    Conection*vector;
public:
    Conection();
    void set_nombre(char*a);
    char* get_nombre();
    void set_relacion(Conection &a,char*relacion);
    char *get_nombre_relacion();
    char* get_rel();
    void actualizacion(char* a,char*relacion);
    void get_relacion();

};

#endif // CONECTION_H
