#ifndef ALUMNO_H
#define ALUMNO_H


class Alumno
{
private:
    char *nombre;
    float nota[4];
public:

    Alumno();
    void setnombre(char* nombre);
    char *getnombre();
    void setnota1(float nota);
    void setnota2(float nota);
    void setnota3(float nota);
    void setnota4(float nota);
    float promedio();
};

#endif // ALUMNO_H
