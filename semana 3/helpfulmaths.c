#include <stdio.h>
#include <string.h>

void ordenaVetor(int vetor[51], int tam){
    int aux;
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = i+1; j < tam; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    } 
}

int main()
{
    char string[101];
    int tamString, vetor[51], countVetor = 0;

    scanf("%s", string);
    tamString = strlen(string);

    for (int i = 0; i < tamString; i++)
    {
        if (string[i] != '+')
        {
            vetor[countVetor] = string[i] - '0';
            countVetor++;
        }
    }
    

    ordenaVetor(vetor, countVetor);


    for (int i = 0; i < countVetor; i++)
    {
        printf("%d", vetor[i]);
        if (i < countVetor-1)
        {
            printf("+");
        }
        
    }
    printf("\n");

    return 0;
}
