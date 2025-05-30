#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ordenaVetor(int vetor[51], int tam) {
    int aux;
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int main() {
    char string[101];
    int tamString, vetor[51], countVetor = 0;

    scanf("%100s", string); 
    tamString = strlen(string);

    for (int i = 0; i < tamString; i++) {
        if (string[i] != '+') {
            if (!isdigit(string[i])) { 
                printf("Entrada inválida!\n");
                return 1;
            }
            vetor[countVetor] = string[i] - '0';
            countVetor++;
            if (countVetor > 50) { 
                printf("Muitos números na entrada!\n");
                return 1;
            }
        }
    }

    ordenaVetor(vetor, countVetor);

    for (int i = 0; i < countVetor; i++) {
        printf("%d", vetor[i]);
        if (i < countVetor - 1) {
            printf("+");
        }
    }
    printf("\n");

    return 0;
}
