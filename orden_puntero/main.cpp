#include <iostream>

using namespace std;

void mostrar(int *arr,int tam){
for(int i=0;i<tam;i++)
    cout<<*(arr+i)<<" ";
}

void ordenar(int *arr,int tam){
    int menor=*(arr);
    int aux,c;
    for(int i=0;i<tam;i++){
        menor=*(arr+i);
        for(int j=i;j<tam;j++)
            if(*(arr+j)<=(menor)){
                menor=*(arr+j);
                c=j;
            }
        aux=*(arr+i);
        *(arr+i)=menor;
        *(arr+c)=aux;
    }
}

int main()
{
int arr[]={4,2,5,1,3};
int tam=5;
ordenar(arr,tam);
mostrar(arr,tam);
return 0;
}

