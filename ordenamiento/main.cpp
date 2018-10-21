#include <iostream>

using namespace std;

void mostrar(int *arr,int tam){
for(int i=0;i<tam;i++)
    cout<<*(arr+i)<<" ";
cout<<endl;
}

void orden_desc(int *arr,int tam){
int mayor,aux,c;
for(int i=0;i<tam;i++){
    mayor=*(arr+i);
    for(int j=i;j<tam;j++)
        if(*(arr+j)>=mayor){
            mayor=*(arr+j);
            c=j;
        }
    *(arr+c)=*(arr+i);
    *(arr+i)=mayor;
}
}

void orden_ascen(int *arr,int tam){
int menor,aux,c;
for(int i=0;i<tam;i++){
    menor=*(arr+i);
    for(int j=i;j<tam;j++)
        if(*(arr+j)<=menor){
            menor=*(arr+j);
            c=j;
        }
    *(arr+c)=*(arr+i);
    *(arr+i)=menor;
}
}

int main()
{
int tam,tipo;
cout<<"Ingrese el tamaño del arreglo: "<<endl;
cin>>tam;
int arr[tam];
cout<<"Ingrese el arreglo: "<<endl;
for(int i=0;i<tam;i++)
    cin>>arr[i];
cout<<"Elija el tipo de ordenamiento: "<<endl<<"Ascendente (1), Descendente (2)"<<endl;
cin>>tipo;
if(tipo==1)
    orden_ascen(arr,tam);
else
    orden_desc(arr,tam);
mostrar(arr,tam);

return 0;
}
