#include <stdio.h>
#include "pilha.h"

int main(){
    Pilha* pilha = Stack();
    int decimal, base;
    printf("Digite o número a ser convertido: ");
    scanf("%d",&decimal);
    printf("Digite a base: ");
    scanf("%d",&base);

    int n = decimal;
    while (n != 0)
    {
        push(pilha, n % base); // Empilha o resto da divisão
        n = n / base;
    }

    printf("Representação na base %d: ", base);
    while (!isEmpty(pilha))
    {
        int digito = peek(pilha);
        pop(pilha);
        if (digito < 10)
            printf("%d", digito);
        else
            printf("%c", 'A' + (digito - 10));
    }
    printf("\n");
    return 0;
}