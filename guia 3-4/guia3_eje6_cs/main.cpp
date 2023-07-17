#include <iostream>

using namespace std;
char* borrar_iteraciones(char* p,int &largo,char dato);
int main()
{
    int largo;
    cout<<"largo de la palabra";
    cin>>largo;
    char *palabra=new char[largo];
    for(int i=0;i<largo;i++){
        cin>>palabra[i];
    }
    palabra[largo]='\0';
    palabra=borrar_iteraciones(palabra,largo,'r');
    for(int i=0;i<largo;i++){
       cout<<palabra[i];
    }
    cout<<endl;
    delete [] palabra;
    return 0;
}

char* borrar_iteraciones(char* p,int &largo,char dato){
    int pos=0;
    int cont=0;
    for(int i=0;i<largo;i++){
        if(p[i]==dato){
            cont++;
        }
    }
    char* n=new char[largo-cont];
    for(int i=0;i<largo;i++){
        if(p[i]!=dato){
            n[pos]=p[i];
            pos++;
        }
    }
    largo=largo-cont;
    n[largo]='\0';
    delete [] p;
    return n;
}
