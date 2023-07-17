#include <iostream>

using namespace std;
int* borrar_todas_ocurrencias(int *v,int &cant,int dato){
    bool band=false;
    int cont=0;
    for(int i=0;i<cant;i++){
        if(v[i]==dato){
            band=true;
            cont++;
            }
    }

    if(band==true){
        int cant2=cant;
        cant=cant-cont;
        int j=0;
        int *n=new int[cant];
        for(int i=0;i<cant2;i++){
            if(v[i]!=dato){
                n[j]=v[i];
                j++;
            }

        }
        delete []v;
        return n;

    }
    return v;
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
    vec=borrar_todas_ocurrencias(vec,cant,3);
    for(int i=0;i<cant;i++){
        cout<<vec[i]<<endl;
    }
    delete []vec;
    return 0;
}
