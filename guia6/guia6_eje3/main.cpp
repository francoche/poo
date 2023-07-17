#include <iostream>
#include "imagen.h"
#include "texto.h"
#include "video.h"

using namespace std;

int main()
{
    Imagen a;
    a.setdescription("iphone 12");
    a.setprecio(2000000);
    cout<<a.getdescription()<<".........."<<a.getprecio()<<endl;
    Video b;
    b.setdescription("mujer_saltando_soga.mp4");
    a.setprecio(200);
    cout<<b.getdescription()<<".........."<<b.getprecio()<<endl;
    texto c;
    c.setdescription("img.jpg");
    c.setprecio(2000);
    cout<<c.getdescription()<<".........."<<c.getprecio()<<endl;
    return 0;

}
