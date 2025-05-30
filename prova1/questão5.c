#include <stdio.h>

int chamadas[50] = {0};

long long fibonacci(int n) {
    chamadas[n]++; 
    if (n == 0) {
        return 0;
    } 
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    chamadas[0] = 0;
    chamadas[1] = 0;

    long long resultado = fibonacci(n);

    printf("fibonacci(%d) = %lld.\n", n, resultado);
    for (int i = 0; i <= n; i++) {
        printf("%d chamada(s) a fibonacci(%d).\n", chamadas[i], i);
    }

    return 0;
}