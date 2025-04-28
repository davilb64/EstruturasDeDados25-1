#include <stdio.h>

long long fatorial(int n) {
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

long long combinacao(int n, int k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

int main() {
    int xFinal, yFinal;
    printf("Ponto final: ");
    scanf("%d %d", &xFinal, &yFinal);

    long long resultado = combinacao(xFinal + yFinal, xFinal);
    printf("Quantidade possível de movimentos de 0,0 a %d,%d : %lld\n", xFinal, yFinal, resultado);

    return 0;
}
