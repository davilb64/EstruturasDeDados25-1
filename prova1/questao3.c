#include <stdio.h>
#include <string.h>

void organizaArray(int array[], int n) {
    int i, j, aux;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (array[i] < array[j]) {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

int main()
{
    char string[101];
    int caracteres;
    scanf("%s",string);
    caracteres = strlen(string);
    int vetor[caracteres], countVetor = 0;
    for (int i = 0; i < caracteres; i++)
    {
        if (string[i] != '+')
        {
            vetor[countVetor] = string[i] - 48;
            countVetor++;
        }
        
    }
    organizaArray(vetor, countVetor);
    for (int i = countVetor - 1; i >= 0; i--)
    {
        printf("%d",vetor[i]);
        if (i > 0)
        {
            printf("+");
        }
        
    }
    printf("\n");
    
    
    

    return 0;
}
