#include "grupo.h"
#include<iostream>
Grupo::Grupo()
{

}

void Grupo::set_usuario(Persona &a)
{
    if(this->mienbros==0){
        this->mienbros++;
        Persona*m=new Persona[this->mienbros];
        m[this->mienbros-1]=a;
        this->usuarios=m;
        a.actualizacion(this->nombre,"miembro");
    }
    else{
        this->mienbros++;
        Persona*m=new Persona[this->mienbros];
        for(int i=0;i<this->mienbros-1;i++){
            m[i]=this->usuarios[i];
        }
        m[this->mienbros-1]=a;
        delete []this->usuarios;
        this->usuarios=m;
        a.actualizacion(this->nombre,"miembro");
    }
}

void Grupo::mostrar_usuarioss()
{
    for(int i=0;i<this->mienbros;i++){
      std::cout<<this->usuarios[i].get_nombre()<<std::endl;
    }
}


