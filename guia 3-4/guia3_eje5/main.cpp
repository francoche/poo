#include <iostream>

using namespace std;
int* eliminar_vector_datoespecifico(int *v,int &cant,int dato){
    bool band=false;int pos;
    for(int i=0;i<cant;i++){
        if(v[i]==dato){
            band=true;
            pos=i;
            i=cant;}
    }
    if(band==true){
        cant--;int j=0;
        int *n=new int[cant];
        for(int i=0;i<cant;i++){
            if(pos!=j){
                n[i]=v[j];
                j++;
            }else{
                j++;
                i--;
            }
        }
        delete [] v;
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
    vec=eliminar_vector_datoespecifico(vec,cant,4);
    for(int i=0;i<cant;i++){
        cout<<vec[i]<<endl;
    }
    delete []vec;
    return 0;
}
