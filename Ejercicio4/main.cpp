#include <iostream>

using namespace std;

    void quitarNegativo(int *ptr){
        if(*(ptr)<0){
            *(ptr)=(rand()%10);
        }
    }

int main()
{
    const int TAM=1000;
    int v[TAM];
    int *ptr;
    ptr=v;

    //Rellena array aleatoriamente
    for(int i=0;i<TAM;i++){
        *(ptr+i)=(rand()%18)-9;
    }
    //Recorre array para quitar los numeros negativos
    for(int i=0;i<TAM;i++){
        quitarNegativo(ptr+i);
        cout<< *(ptr+i)<<endl;
    }

    return 0;
}
