#include "pila.h"

Pila::Pila()
{
  this->tamanio=0;
  this->tope=NULL;
}

void Pila::setnodo(int a)
{
    Nodo *n=new Nodo();
    n->setdato(a);
    n->setlink(this->link);
    this->link=n;
    n=NULL;
    std::cout<<"numero insertado "<<a<<std::endl;


}

int Pila::get()
{
   if(this->link!=NULL){
       Nodo* anterior;
       anterior=this->link;
       int aux=this->link->getdato();
       this->link=this->link->getlink();
       delete anterior;
       return aux;
   }else{
     std::cout<<"pila vacia "<<std::endl;
   }

}





