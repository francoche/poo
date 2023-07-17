#include <iostream>

using namespace std;
void mayusculas(char *p,int largo){
    for(int i=0;i<largo;i++){
        p[i]=p[i]-32;
    }
}
void minusculas(char *p,int largo){
    for(int i=0;i<largo;i++){
        p[i]=p[i]+32;
    }
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
    for(int i=0;i<largo;i++){
       cout<<palabra[i];
    }
    cout<<endl;
    mayusculas(palabra,largo);
    for(int i=0;i<largo;i++){
       cout<<palabra[i];
    }
    minusculas(palabra,largo);
    for(int i=0;i<largo;i++){
       cout<<palabra[i];
    }
    delete [] palabra;
}
