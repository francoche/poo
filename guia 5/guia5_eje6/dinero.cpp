#include "dinero.h"
#include <iostream>
Dinero::Dinero()
{

}

void Dinero::setmonto(int monto)
{
    this->monto=monto;
}

void Dinero::getmonto()
{
   int largo=0;
   int largo_anterior;
   if(this->monto/1000>0){

       int aux=this->monto/1000;
       largo=largo+aux;
       int *vector=new int[largo];
       for(int i=0;i<largo;i++){
           vector[i]=1000;
       }
       this->monto=this->monto-(1000*aux);
       this->vec=vector;

   }
   if(this->monto/500>0){

       int aux=this->monto/500;
       largo_anterior=largo;
       largo=largo+aux;
       delete [] this->vec;
       int *vector=new int[largo];
       for(int i=0;i<largo_anterior;i++){
           vector[i]=1000;
       }
       for(int i=largo_anterior;i<largo;i++){
           vector[i]=500;
       }
       this->monto=this->monto-(500*aux);
       this->vec=vector;

   }
   if(this->monto/200>0){

       int aux=this->monto/200;
       largo_anterior=largo;
       largo=largo+aux;
       int *vector=new int[largo];
       for(int i=0;i<largo_anterior;i++){
           vector[i]=this->vec[i];
       }
       for(int i=largo_anterior;i<largo;i++){
           vector[i]=200;
       }
       this->monto=this->monto-(200*aux);
       this->vec=vector;

   }
   if(this->monto/100>0){

       int aux=this->monto/100;
       largo_anterior=largo;
       largo=largo+aux;
       int *vector=new int[largo];
       for(int i=0;i<largo_anterior;i++){
           vector[i]=this->vec[i];
       }
       for(int i=largo_anterior;i<largo;i++){
           vector[i]=100;
       }
       this->monto=this->monto-(100*aux);
       this->vec=vector;

   }

   if(this->monto/50>0){

       int aux=this->monto/50;
       largo_anterior=largo;
       largo=largo+aux;
       int *vector=new int[largo];
       for(int i=0;i<largo_anterior;i++){
           vector[i]=this->vec[i];
       }
       for(int i=largo_anterior;i<largo;i++){
           vector[i]=50;
       }
       this->monto=this->monto-(50*aux);
       this->vec=vector;

   }

   if(this->monto/20>0){

       int aux=this->monto/20;
       largo_anterior=largo;
       largo=largo+aux;
       int *vector=new int[largo];
       for(int i=0;i<largo_anterior;i++){
           vector[i]=this->vec[i];
       }
       for(int i=largo_anterior;i<largo;i++){
           vector[i]=20;
       }
       this->monto=this->monto-(20*aux);
       this->vec=vector;

   }
   if(this->monto/10>0){

       int aux=this->monto/10;
       largo_anterior=largo;
       largo=largo+aux;
       int *vector=new int[largo];
       for(int i=0;i<largo_anterior;i++){
           vector[i]=this->vec[i];
       }
       for(int i=largo_anterior;i<largo;i++){
           vector[i]=10;
       }
       this->monto=this->monto-(10*aux);
       this->vec=vector;

   }

   if(this->monto/5>0){

       int aux=this->monto/5;
       largo_anterior=largo;
       largo=largo+aux;
       int *vector=new int[largo];
       for(int i=0;i<largo_anterior;i++){
           vector[i]=this->vec[i];
       }
       for(int i=largo_anterior;i<largo;i++){
           vector[i]=5;
       }
       this->monto=this->monto-(5*aux);
       this->vec=vector;

   }

   if(this->monto/2>0){

       int aux=this->monto/2;
       largo_anterior=largo;
       largo=largo+aux;
       int *vector=new int[largo];
       for(int i=0;i<largo_anterior;i++){
           vector[i]=this->vec[i];
       }
       for(int i=largo_anterior;i<largo;i++){
           vector[i]=2;
       }
       this->monto=this->monto-(2*aux);
       this->vec=vector;

   }

   if(this->monto/1>0){

       int aux=this->monto/1;
       largo_anterior=largo;
       largo=largo+aux;
       int *vector=new int[largo];
       for(int i=0;i<largo_anterior;i++){
           vector[i]=this->vec[i];
       }
       for(int i=largo_anterior;i<largo;i++){
           vector[i]=1;
       }
       this->monto=this->monto-(1*aux);
       this->vec=vector;

   }
   for(int i=0;i<largo;i++){
       std::cout<<this->vec[i]<<" "<<std::ends;
   }
   delete []this->vec;


}
