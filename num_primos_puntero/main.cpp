#include <iostream>

using namespace std;

int num_primos(int *arr,int tam){
    int c=0,p=0;
    for(int i=0;i<tam;i++){
        for(int j=1;j<=*(arr+i);j++)
            if(*(arr+i)%j==0)
                c+=1;
        if(c==2)
            p+=1;
        c=0;
    }
    return p;
}

int main()
{
int arr[]={2,81,23,3,4,11,8,5,13};
int tam=9;
cout<<num_primos(arr,tam);
    return 0;
}
