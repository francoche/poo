#include "probando.h"





template<class  T>
Probando<T>::Probando()
{

}

template<class T>
void Probando<T>::setvec(T dato)
{
    if(cont==0){
        cont++;
        this->vec=new T[cont];
        this->vec[cont-1]=dato;
    }else{
        cont++;
        T *aux=new T[cont];
        for(int i=0;i<cont-1;i++){
            aux[i]=vec[i];
        }
        aux[cont-1]=dato;
        delete [] vec;
        vec=aux;
    }
}

template<class T>
void Probando<T>::mostrarvect()
{
    for(int i=0;i<cont;i++){
        std::cout<<vec[i]<<std::endl;
    }
}





