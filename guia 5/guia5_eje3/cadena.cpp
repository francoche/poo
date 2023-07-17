#include "cadena.h"

Cadena::Cadena()
{

}

void Cadena::setcadena(char *palabra)
{
    this->palabra=palabra;
}

char *Cadena::getcadena()
{
    return this->palabra;
}

int Cadena::cantcaractere()
{
     int i=0;
     int cont=0;
     while(this->palabra[i]!='\0'){
         cont++;
         i++;
     }
     return cont;
}

Cadena Cadena::agregar_final(char caracter)
{
    int i=0;
    int cont=0;
    while(this->palabra[i]!='\0'){
        cont++;
        i++;
    }
    Cadena m;
    char *n=new char[cont];
    for(int i=0;i<cont;i++){
        n[i]=this->palabra[i];
    }
    n[cont]=caracter;
    m.setcadena(n);
    return m;
}

Cadena Cadena::agregar_principio(char caracter)
{
    int i=0;
    int cont=0;
    while(this->palabra[i]!='\0'){
        cont++;
        i++;
    }
    Cadena m;
    char *n=new char[cont];
    n[0]=caracter;
    int poss=1;
    for(int i=0;i<cont;i++){
        n[poss]=this->palabra[i];
        poss++;
    }
    m.setcadena(n);
    return m;
}

Cadena Cadena::remover_pri_ocurrencia(char caracter)
{
    int i=0;
    int cont=0;
    int cont2=0;
    int poss;
    int poss2=0;
    bool band=false;
    while(this->palabra[i]!='\0'){
        cont++;
        i++;
    }
    for(int i=0;i<cont;i++){
        if(this->palabra[i]==caracter){
            poss=i;
            i=cont;
            band=true;
        }
    }
    if(band==true){
        char *n=new char[cont-1];
        for(int i=0;i<cont;i++){
            if(i!=poss){
                n[poss2]=this->palabra[i];
                poss2++;
            }else{
                //poss2--;
            }
        }
        n[cont]='\0';
        Cadena m;
        m.setcadena(n);
        return m;

    }else{
        Cadena m;
        m.setcadena(this->palabra);
        return m;
    }

}

void Cadena::mayuscula()
{
    int i=0;
    int cont=0;
    while(this->palabra[i]!='\0'){
        cont++;
        i++;
    }
    for(int i=0;i<cont;i++){
        if(this->palabra[i]>96 && this->palabra[i]<123){
            this->palabra[i]=this->palabra[i]-32;
        }
    }

}
