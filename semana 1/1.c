#include <stdio.h>

int main(){
    int Tamanho_Array, Soma = 0;
    scanf("%d",&Tamanho_Array);
    int Array[Tamanho_Array];
    for (int i = 0; i < Tamanho_Array; i++)
    {
        scanf("%d",&Array[i]);
        Soma = Soma + Array[i];
    }
    printf("%d\n",Soma);
    
}