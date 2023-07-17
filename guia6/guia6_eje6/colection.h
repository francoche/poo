#ifndef COLECTION_H
#define COLECTION_H


class Colection
{
protected:
    int *vec;
    int cantelemento=0;
public:
    Colection();
    virtual void setelemento(int a)=0;
    void eliminarelemento(int a);
    void getvec();
};

#endif // COLECTION_H
