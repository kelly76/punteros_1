#include <iostream>

using namespace std;

void mostrar(int *arr,int tam){
for(int i=0;i<tam;i++)
    cout<<*(arr+i)<<" ";
}

void invertir(int *arr,int tam){
    int aux;
    for(int i=0;i<tam/2;i++){
        aux=*(arr+i);
        *(arr+i)=*(arr+(tam-1-i));
        *(arr+(tam-1-i))=aux;
    }
}

int main()
{
int tam=5;
int arr[tam]={1,2,3,4,5};
invertir(arr,tam);
mostrar(arr,tam);


    return 0;
}
