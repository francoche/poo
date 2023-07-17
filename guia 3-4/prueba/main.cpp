#include <iostream>

using namespace std;
void ordenar(int *v,int cant){
    for(int i=0;i<cant-1;i++){
        for(int j=(i+1);j<cant;j++){
            if(v[i]>v[j]){
                int aux;
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}
int main()
{
    int cant;
    cout<<"ingrese cantidad ";
    cin>>cant;
    int *vec=new int[cant];
    for(int i=0;i<cant;i++){
        cin>>vec[i];
    }
    ordenar(vec,cant);
    for(int i=0;i<cant;i++){
        cout<<vec[i]<<endl;
    }
    delete []vec;
    return 0;
}
