#ifndef TARIFA_H
#define TARIFA_H


class Tarifa
{
protected:
    int consumo_x_timepo;
    int consumo_x_mes;
    int consimo_x_mega;
    int numerocliente;
    float montoacobrar;
    char* tipotarifa;
public:
    Tarifa();
    void setmontos(int a,int b,int c);
    void setnumerocliente(int a);
    void settipotarifa(char*a);
    void virtual setmontocobrar();
    int getmontocobrar();
    int getmontoa();
    int getmontob();
    int getmontoc();
    int getcliente();
    char*gettipotarifa();
};

#endif // TARIFA_H
