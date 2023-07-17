#include <iostream>
#include "vecdi.h"
using namespace std;

int main()
{
    cout<<"ingrese cantidad del vector";
    int cant;
    cin>>cant;
    int *vector=new int[cant];
    for(int i=0;i<cant;i++){
        vector[i]=i+1;
    }
    Vecdi vec(vector,cant);
    cout<<vec.cant_elementos();
    //vec.setelementos(9);
    vec.getelementos();
    vec-4;
    vec+9;
    cout<<vec.cant_elementos();
    cout<<endl;
    cout<<vec.mayor_elemento();
    cout<<vec.menor_elemento();
    cout<<endl;
    vec.getelementos();
    cout<<endl;


}
