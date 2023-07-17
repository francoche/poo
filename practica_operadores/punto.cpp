#include "punto.h"

punto::punto()
{

}

punto::punto(int x, int y)
{
    this->x=x;
    this->y=y;
}

int punto::getx()
{
    return this->x;
}
int punto::gety()
{
    return this->y;
}

void punto::operator/(punto a)
{
    this->x=this->x+a.getx();
    this->y=this->y+a.gety();


}

void punto::operator-(punto a)
{
    this->x=this->x-a.getx();
    this->y=this->y-a.gety();
}

punto punto::operator+(punto a)
{
    punto r;
    r.x=this->x+a.getx();
    r.y=this->y+a.gety();
    return r;


}
std::ostream& operator<<(std::ostream& os, const punto& punt){
    return os <<"x "<<punt.x<<" y "<<punt.y;
}
