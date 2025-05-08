#include <stdio.h>

int somarecursiva(int vetor[], int tam)
{
    if (tam == 0)
    {
        return 0;
    }

    else
    {
        printf("%d\n", vetor[tam - 1]);
        return vetor[tam - 1] + somarecursiva(vetor, tam - 1);
    }
}

int main()
{
    int vetor[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("%d\n", somarecursiva(vetor, 3));
    
    return 0;
}
