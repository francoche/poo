#ifndef USUARIO_H
#define USUARIO_H


class Usuario
{
protected:
    char*nombre;
public:
    Usuario();
    void set_nombre(char*nombre);
    char* get_nombre();

};

#endif // USUARIO_H
