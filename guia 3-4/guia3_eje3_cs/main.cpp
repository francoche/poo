#include <iostream>

using namespace std;
void agragar_ultima_pos(char* p,int &largo,char dato){
    p[largo]=dato;
    p[largo+1]='\0';
    largo=largo+1;
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
    agragar_ultima_pos(palabra,largo,'j');
    for(int i=0;i<largo;i++){
       cout<<palabra[i];
    }
    cout<<endl;
    delete [] palabra;
}
