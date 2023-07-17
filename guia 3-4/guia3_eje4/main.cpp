#include <iostream>

using namespace std;
int* sacar_vector_pos(int *v,int &cant,int pos){
    if(pos-1>cant){
        return v;
    }
    cant--;int j=0;
    int *n=new int[cant];
    for(int i=0;i<cant;i++){
        if(pos-1!=j){
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
int main()
{
    int cant;
    cout<<"ingrese cantidad ";
    cin>>cant;
    int *vec=new int[cant];
    for(int i=0;i<cant;i++){
        vec[i]= i+1;
    }
    vec=sacar_vector_pos(vec,cant,3);
    for(int i=0;i<cant;i++){
        cout<<vec[i]<<endl;
    }
    delete []vec;
    cout<<"hola";
    return 0;
}
