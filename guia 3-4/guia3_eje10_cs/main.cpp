#include <iostream>
#include <string.h>
using namespace std;
char* mostrar(char *v,char letra,int &largo){
    int cont=0;
    int cont2=0;
    int cont3=0;
    for(int i=0;i<999999;i++){
        if(v[i]!='\0'){
            cont++;
        }else{
            i=999999;
        }
    }
    char *pch;
    pch=strrchr(v,'c');
    for(int i=0;i<999999;i++){
        if(pch[i]!='\0' && pch[i]!=' ') {
            cout<<pch[i];
            cont2++;
        } else{
            i=999999;
        }
    }
    cout<<cont2;

    /*cout<<cont<<endl;
    for(int i=0;i<cont;i++){
            if(v[i]==letra){
                cont2=i;
            }
    }
    cout<<cont2<<endl;
    cont3=cont-cont2;
    cout<<cont3<<endl;
    char *palabra=new char[cont3];
    int poss=0;
    for(int i=cont2;i<cont;i++){
        palabra[poss]=v[i];
        //cout<<palabra[poss];
        poss++;

    }
    /*for(int i=0;i<cont;i++){

        cout<<palabra[i];


    }
    largo=poss;
    return palabra;
    delete [] v;*/
}
int main()
{
    char *m="hola como estas carlos";
    char *aux;
    int largo=0;
    aux=mostrar(m,'c',largo);
    for(int i=0;i<largo;i++){
        cout<<aux[i];
    }


    return 0;



}
