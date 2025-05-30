#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int vetor[n];
    for (int i = 0; i < n; i++) {
        vetor[i] = 0;
    }

    for (int i = 0; i < n - 1; i++) {
        int valor;
        scanf("%d", &vetor[i]);
        
    }

    for (int i = 0; i < n; i++) {
        if (vetor[i] == 0) {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}