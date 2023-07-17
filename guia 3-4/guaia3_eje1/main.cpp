#include <iostream>

using namespace std;
int* agregar_vector(int *v,int &cant,int dato){
    cant++;
    int *n=new int[cant];
    for(int i=0;i<(cant-1);i++){
        n[i]=v[i];
    }
    n[cant-1]=dato;
    delete []v;
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
    vec=agregar_vector(vec,cant,15);
    for(int i=0;i<cant;i++){
        cout<<vec[i]<<endl;
    }
    delete []vec;
    return 0;
}
