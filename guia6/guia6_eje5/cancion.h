#ifndef CANCION_H
#define CANCION_H


class cancion
{
protected:
    char *nombre;
    char *autor;
public:
    cancion();
    void set_nombre(char*a);
    char*get_nombre();
    void set_autor(char*a);
    char*get_autor();
};

#endif // CANCION_H
