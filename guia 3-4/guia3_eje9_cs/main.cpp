#include <iostream>

using namespace std;
int priemra_ocurrencia(char* v,int largo,char dato){
    int poss;
    for(int i=0;i<largo;i++){
        if(v[i]==dato){
            poss=i;
        }
    }
    return poss;
}
int main()
{
    int largo;
    int pos;
    cout<<"largo de la palabra";
    cin>>largo;
    char *palabra=new char[largo];
    for(int i=0;i<largo;i++){
        palabra[i]=' ';
    }
    for(int i=0;i<largo;i++){
        cin>>palabra[i];
    }
    palabra[largo]='\0';
    pos=priemra_ocurrencia(palabra,largo,'l');
    for(int i=0;i<largo;i++){
       cout<<palabra[i];
    }
    cout<<endl;
    cout<<"posicion "<<pos;
    delete [] palabra;
    return 0;
}
