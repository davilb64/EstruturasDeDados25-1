#include <stdio.h>

int main() {
    int tamVetor;
    while (scanf("%d", &tamVetor), tamVetor != 0)
    {
        int vetor[tamVetor], countMaria = 0, countJoao = 0;
        for (int i = 0; i < tamVetor; i++)
        {
            scanf("%d", &vetor[i]);
            if (vetor[i] == 0) {
                countMaria++;
            } else if (vetor[i] == 1) {
                countJoao++;
            }
        }
        printf("Mary won %d times and John won %d times\n", countMaria, countJoao);
    }


    return 0;
}