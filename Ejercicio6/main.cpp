#include <iostream>

using namespace std;

bool comprobarOrden(int a,int b){
    return(a<b);
}

void cambiar(int *ptr1,int *ptr2){
    int aux=*ptr1;
    *ptr1=*ptr2;
    *ptr2=aux;
    }
void ordenar(int v[],const int util, bool (*comparacion)(int,int)){
    int indice;

    //Bucle que recorre valores
    for(int i=0;i<util;i++){
        indice=i;
        for(int j=i+1;j<util;j++){
            if(!(*comparacion)(v[indice],v[j])){
                indice=j;
            }
        }
        cambiar(&v[indice],&v[i]);
    }
}
int main()
{
    const int TAM=10;
    int v[TAM];
    int *ptr=v;
    int maximo=0,minimo=0;

    for(int i=0;i<TAM;i++){
        *(ptr+i)=(rand()%100)+1;
    }

    ordenar(v,TAM,comprobarOrden);

    maximo=*(ptr+TAM-1);
    minimo=*ptr;

    for(int i=0;i<TAM;i++){
        cout<< " "<<v[i];
    }

    cout<<endl;

    cout << "Minimo: " << minimo << " // Maximo: " << maximo;

}
