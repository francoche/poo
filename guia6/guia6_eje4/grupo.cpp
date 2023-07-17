#include "grupo.h"
#include <iostream>
Grupo::Grupo()
{

}

void Grupo::set_nombre(char *a)
{
    this->nombre=a;
}

void Grupo::set_usuario(Conection &a)
{
    if(this->mienbros==0){
        this->mienbros++;
        Conection*m=new Conection[this->mienbros];
        m[this->mienbros-1]=a;
        this->usuarios=m;
        a.actualizacion(this->nombre,"miembro");
    }
    else{
        this->mienbros++;
        Conection*m=new Conection[this->mienbros];
        for(int i=0;i<this->mienbros-1;i++){
            m[i]=this->usuarios[i];
        }
        m[this->mienbros-1]=a;
        delete []this->usuarios;
        this->usuarios=m;
        a.actualizacion(this->nombre,"miembro");
    }

}

void Grupo::mostrar_usuarios()
{
    for(int i=0;i<this->mienbros;i++){
      std::cout<<this->usuarios[i].get_nombre() <<std::endl;
    }
}










