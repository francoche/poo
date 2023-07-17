#ifndef CADENA_H
#define CADENA_H


class Cadena
{
private:
    char *palabra;
public:
    Cadena();
    void setcadena(char *palabra);
    char *getcadena();
    int cantcaractere();
    Cadena agregar_final(char caracter);
    Cadena agregar_principio(char caracter);
    Cadena remover_pri_ocurrencia(char caracter);
    void mayuscula();
};

#endif // CADENA_H
