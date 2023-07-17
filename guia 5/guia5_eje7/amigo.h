#ifndef AMIGO_H
#define AMIGO_H


class Amigo
{
private:
    char* nombre;
    char* fecha;

public:
    Amigo();
    //Amigo(char* nombre);
    void setnombre(char* nombre);
    void setfecha(char* fecha);
    char* getnombre();
    char* getfecha();
};

#endif // AMIGO_H
