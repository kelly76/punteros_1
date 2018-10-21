#include <iostream>

using namespace std;

void mostrar(string *cad,int tam){
for(int i=0;i<tam;i++)
    cout<<*(cad+i)<<" ";
}

void orden(string *cad,int tam){
string menor,aux;
int c;
for(int i=0;i<tam;i++){
    menor=*(cad+i);
    for(int j=i;j<tam;j++)
        if(*(cad+j)<=menor){
            menor=*(cad+j);
            c=j;
        }
    *(cad+ c)=*(cad+i);
    *(cad+i)=menor;
}
}


int main()
{
string cad[]={"hola","hilo","alas","avion"};
int tam=4;
orden(cad,tam);
mostrar(cad,tam);
return 0;
}
