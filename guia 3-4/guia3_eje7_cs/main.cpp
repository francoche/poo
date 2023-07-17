#include <iostream>

using namespace std;
char* mostrar_palabra_entero(char *v,int &largo,int pos){
    int cont=0;
    /*for(int i=0;i<largo;i++){
        cont++;
    }
    cout<<cont;*/
    if(pos<largo){
        for(int i=pos-1;i<largo;i++){
            cont++;
        }
        cout<<cont;
        char *n=new char[cont];
        int poss=0;
        for(int i=(pos-1);i<largo;i++){
            n[poss]=v[i];
            poss++;

        }
        largo=cont;
        delete []v;
        return n;
    }
    return v;

}
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
    palabra=mostrar_palabra_entero(palabra,largo,3);
    for(int i=0;i<largo;i++){
       cout<<palabra[i];
    }
    cout<<endl;
    delete [] palabra;
    return 0;
}
