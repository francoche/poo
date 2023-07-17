#include "lista_ordenada.h"
#include <iostream>
Lista_ordenada::Lista_ordenada()
{

}

void Lista_ordenada::set_lista(int dato)
{
    Lista_ordenada* actual=this->cabeza;
    Lista_ordenada* anterior=NULL;
    Lista_ordenada*nnodo=new Lista_ordenada();
    nnodo->dato=dato;
    if(this->cabeza!=NULL){
        while (actual!=NULL) {
            anterior=actual;
            actual=anterior->link;
        }
    anterior->link=nnodo;
    }else{
       this->cabeza=nnodo;
    }
    nnodo->link=NULL;
    Lista_ordenada* actua = this->cabeza;
        while (actua!=NULL){
            Lista_ordenada* anterior=actua;
            Lista_ordenada* siguiente=actua->link;
            while (siguiente!=NULL){
                if (siguiente->dato<anterior->dato) {
                    anterior=siguiente;
                }
                siguiente = siguiente->link;
            }
            int aux = actua->dato;
            actua->dato=anterior->dato;
            anterior->dato=aux;
            actua = actua->link;
        }
}

void Lista_ordenada::get_lista()
{
    Lista_ordenada* actual=this->cabeza;
    Lista_ordenada* anterior=NULL;

    if(this->cabeza!=NULL){
        while (actual!=NULL) {
            anterior=actual;
            std::cout<<actual->dato<<" "<<std::ends;
            actual=anterior->link;
}
    }
}
