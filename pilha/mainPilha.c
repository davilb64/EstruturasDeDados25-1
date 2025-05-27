#include <stdio.h>
#include "pilha.h"

int main(){
    Pilha* pilha = Stack();
    int decimal;
    printf("Digite o número a ser convertido: ");
    scanf("%d",&decimal);
    while (decimal != 0)
    {
        if (decimal % 2 == 0)
        {
            push(pilha, 0);
        }
        else
        {
            push(pilha, 1);
        }
        decimal = decimal / 2;
    }
    printf("Representação binária: ");
    while (isEmpty(pilha) != 1)
    {
        printf("%d", peek(pilha));
        pop(pilha);
    }
    printf("\n");
    return 0;
}