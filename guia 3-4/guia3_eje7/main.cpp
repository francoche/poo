#include <iostream>

using namespace std;
int* borrar_final(int *v,int &cant,int cant_borra){
    if(cant_borra>cant){
        return v;
    }else{
        cant=cant-cant_borra;
        int *n=new int[cant];
        for(int i=0;i<cant;i++){
            n[i]=v[i];
    }
        delete []v;
        return n;
}
}
int main()
{
    int cant;
    cout<<"ingrese cantidad ";
    cin>>cant;
    int *vec=new int[cant];
    for(int i=0;i<cant;i++){
        vec[i]= i+1;
    }
    vec=borrar_final(vec,cant,3);
    for(int i=0;i<cant;i++){
        cout<<vec[i]<<endl;
    }
    delete []vec;
    return 0;
}
