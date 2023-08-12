#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
protected:
    char*nombre;
    char*apellido;
    int dni;
    int notafinal;
    char*condicion;
    char*meil;
public:
    Alumno();
    void setnombre(char*a);
    void setapellido(char*a);
    void setmail();
    void setdni(int a);
    void setnotafinal(int a);
    char*getnombre();
    char*getapellido();
    int getdni();
    char*getcondicion();
    virtual char* mosrtarcondicion();

};

#endif // ALUMNO_H
