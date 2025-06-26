#include <stdio.h>

int buscaPrimeira(int* vetor, int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1, resultado = -1;
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        if (vetor[meio] == chave) {
            resultado = meio;
            fim = meio - 1;
        } else if (vetor[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return resultado;
}

int buscaUltima(int* vetor, int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1, resultado = -1;
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        if (vetor[meio] == chave) {
            resultado = meio;
            inicio = meio + 1;
        } else if (vetor[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return resultado;
}

int main() {
    int tamanho, chave;
    scanf("%d", &tamanho);
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
        scanf("%d", &vetor[i]);
    scanf("%d", &chave);

    int primeiro = buscaPrimeira(vetor, tamanho, chave);
    int ultimo = buscaUltima(vetor, tamanho, chave);

    if (primeiro == -1)
        printf("-1 -1 0\n");
    else
        printf("%d %d %d\n", primeiro, ultimo, ultimo - primeiro + 1);

    return 0;
}
