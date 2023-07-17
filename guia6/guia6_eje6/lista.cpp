#include "lista.h"
#include <iostream>
Lista::Lista()
{

}

void Lista::set_lista(int dato)
{
    Lista* actual=this->cabeza;
    Lista* anterior=NULL;
    Lista*nnodo=new Lista();
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
}

void Lista::borrar_lista(int dato)
{

    Lista* actual=this->cabeza;
    Lista* aux=NULL;
    Lista* anterior=NULL;

    if(this->cabeza!=NULL){
        while (actual!=NULL && actual->dato!=dato) {
            anterior=actual;
            actual=actual->link;
    }
    if(actual!=NULL){
        if(this->cabeza==actual){
           this->cabeza=actual->link;
           delete actual;
        }
        else if(actual->link==NULL){
            anterior->link=actual->link;
            delete actual;

        }
        else{
            aux=actual;
            anterior->link=actual->link;
            delete aux;

       }
    }




    }
}

    void Lista::get_lista()
    {
        Lista* actual=this->cabeza;
        Lista* anterior=NULL;

        if(this->cabeza!=NULL){
            while (actual!=NULL) {
                anterior=actual;
                std::cout<<actual->dato<<" "<<std::ends;
                actual=anterior->link;


            }
        }
    }


