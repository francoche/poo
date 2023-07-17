#include <iostream>

using namespace std;
char* agragar_primera_pos(char* p,int &largo,char dato){
    largo=largo+1;
    char *n=new char[largo];
    for(int i=0;i<largo;i++){
        if(i==0){
            n[i]=dato;
        }else{
            n[i]=p[i-1];
        }
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
    palabra=agragar_primera_pos(palabra,largo,'j');
    for(int i=0;i<largo;i++){
       cout<<palabra[i];
    }
    cout<<endl;
    delete [] palabra;
}
