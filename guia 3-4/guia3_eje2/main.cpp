#include <iostream>

using namespace std;
int* agregar_vec_primera_pos(int* v,int &cant,int dato){
    cant++;
    int *n=new int[cant];
    n[0]=dato;
    for(int i=1;i<cant;i++){
        n[i]=v[i-1];
    }
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
    vec=agregar_vec_primera_pos(vec,cant,15);
    for(int i=0;i<cant;i++){
        cout<<vec[i]<<endl;
    }
    delete []vec;
    return 0;
}
