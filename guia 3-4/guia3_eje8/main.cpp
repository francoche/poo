#include <iostream>

using namespace std;
int* duplicar_vec(int *v,int &cant){
    if(cant!=0){
        int cant2=cant;
        cant=cant+cant;
        int *n=new int[cant];
        for(int i=0;i<cant2;i++){
            n[i]=v[i];
        }
        int j=0;
        for(int i=cant2;i<cant;i++){
            n[i]=v[j];
            j++;
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
    vec=duplicar_vec(vec,cant);
    for(int i=0;i<cant;i++){
        cout<<vec[i]<<endl;
    }
    delete []vec;
    return 0;
}
