#include <iostream>

using namespace std;
int* agregar_vector_pos(int *v,int &cant,int pos,int dato){
    cant++;int j=0;
    int *n=new int[cant];
    for(int i=0;i<cant;i++){
        if(pos-1!=i){
            n[i]=v[j];
            j++;
        }else{
            n[pos-1]=dato;

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
    vec=agregar_vector_pos(vec,cant,3,15);
    for(int i=0;i<cant;i++){
        cout<<vec[i]<<endl;
    }
    delete []vec;
    return 0;
}
