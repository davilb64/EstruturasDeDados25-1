#include <stdio.h>

void decimalParaBase(int entrada, int base) {
    if (entrada == 0) return;

    decimalParaBase(entrada / base, base);

    int resto = entrada % base;
    if (resto < 10)
        printf("%d", resto);
    else
        printf("%c", 'A' + resto - 10); // Para bases como hexadecimal
}

int main() {
    int entrada, base;
    printf("Número: ");
    scanf("%d", &entrada);
    printf("Base: ");
    scanf("%d", &base);

    if (entrada == 0) {
        printf("0");
    } else {
        decimalParaBase(entrada, base);
    }

    printf("\n");
    return 0;
}
