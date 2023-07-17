#include <iostream>

using namespace std;
char* eliminar_primera_letra(char*p,int &largo){
    largo--;
    char *n=new char[largo];
    for(int i=0;i<largo;i++){
        n[i]=p[i+1];
    }
    n[largo]='\0';
    delete [] p;
    return n;
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
    palabra=eliminar_primera_letra(palabra,largo);
    for(int i=0;i<largo;i++){
       cout<<palabra[i];
    }
    cout<<endl;
    delete [] palabra;
    return 0;
}
