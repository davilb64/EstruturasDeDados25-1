#include <stdio.h>

void rotacionaVetor(int vetor[], int tamanhoVetor, int rotacoes) {
    for (int i = 0; i < rotacoes; i++) {
        int aux = vetor[0];
        for (int j = 0; j < tamanhoVetor - 1; j++) {
            vetor[j] = vetor[j + 1];
        }
        vetor[tamanhoVetor - 1] = aux;
    }
}

int main() {
    int tamanhoVetor, rotacoes;
    scanf("%d %d", &tamanhoVetor, &rotacoes);
    int vetor[tamanhoVetor];
    for (int i = 0; i < tamanhoVetor; i++) {
        scanf("%d", &vetor[i]);
    }

    rotacionaVetor(vetor, tamanhoVetor, rotacoes);

    for (int i = 0; i < tamanhoVetor; i++) {
        printf("%d", vetor[i]);
        if (i < tamanhoVetor - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
