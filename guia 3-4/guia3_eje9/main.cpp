#include <iostream>

using namespace std;
int contar_filas(int *v,int cant){
    int cont=0;
    for(int i=0;i<cant;i++){
        if(v[i]!=v[i+1]){
            cont++;
        }

    }
    return cont;
}
int** contar_iteracion(int *v,int &cant){
    //ordenar
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
    //crear vector para guardar los distintos valores VECTOR N(primero cuanto cuanto num dif hay)
    int cont=0;
    for(int i=0;i<cant;i++){
        if(v[i]!=v[i+1]){
            cont++;
        }

    }
    //cout<<"contador"<<cont<<endl;
    int *n=new int[cont];
    int pos=0;
    for(int i=0;i<cant-1;i++){
        if(v[i]!=v[i+1]){
            n[pos]=v[i];
            n[pos+1]=v[i+1];
            pos++;
        }
    }
    //contar cada iteracion creando otro vector m
    int *m=new int[cont];
    for(int i=0;i<cont;i++){
        m[i]=0;
    }
    for(int i=0;i<cont;i++){
        for(int j=0;j<cant;j++){
            if(n[i]==v[j]){
                m[i]=m[i]+1;

            }
        }
    }
    int **arreglo = new int*[cont];
    for (int i = 0; i < cont; i++) {
        arreglo[i] = new int[2];
    }
    for(int i=0;i<cont;i++){
        arreglo[i][0]=n[i];
        arreglo[i][1]=m[i];
    }
    cant=cont;
    delete [] n;
    delete [] m;
    delete [] v;
    return arreglo;
}
int main()
{
    int cant;
    cout<<"ingrese cantidad ";
    cin>>cant;
    int *vec=new int[cant];
    cout<<"ingrese "<<cant<<" valores";
    for(int i=0;i<cant;i++){
        cin>>vec[i];
    }
    int filas=contar_filas(vec,cant);
    int colum=2;
    int **arreglo = new int*[filas];
    for (int i = 0; i < filas; i++) {
        arreglo[i] = new int[colum];
    }
    arreglo=contar_iteracion(vec,cant);
    for(int i=0;i<cant;i++){
        cout<<arreglo[i][0]<<" "<<arreglo[i][1]<<endl;
    }
    //delete [] vec;
    for (int i=0; i<filas; i++) {
       delete[] arreglo[i];
            }
    delete [] arreglo;

    return 0;
}
