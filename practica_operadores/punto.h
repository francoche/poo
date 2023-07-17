#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>

class punto
{

private:
int x,y;
public:
    punto();
    punto(int x,int y);
    int getx();
    int gety();
    void operator/( punto a);
    void operator-( punto a);
    punto operator+( punto a);
    friend std::ostream& operator<<(std::ostream& os, const punto& punt);
};

#endif // PUNTO_H
