#include <iostream>

using namespace std;

int num_perfect(int *arr,int tam){
    int sum=0,c=0;
    for(int i=0;i<tam;i++){
        for(int j=1;j<*(arr+i);j++)
            if(*(arr+i)%j==0){
                sum+=j;
            }
        if(sum==*(arr+i))
            c+=1;
        sum=0;
    }
    return c;
}

int main()
{
int arr[]={496,4,6,9,28,10};
int tam=6;
cout<<num_perfect(arr,tam);
    return 0;
}
