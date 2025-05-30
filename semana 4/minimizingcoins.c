#include <stdio.h>

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

int minimaMoedas(int array[], int n, int alvo) {
    if (alvo == 0) {
        return 0;
    } else {
        if (alvo < 0) {
            return -1;
        } else {
            int menor = -1;
            int i = 0;
            while (i < n) {
                int resultado = minimaMoedas(array, n, alvo - array[i]);
                if (resultado != -1) {
                    resultado = resultado + 1;
                    if (menor == -1) {
                        menor = resultado;
                    } else {
                        if (resultado < menor) {
                            menor = resultado;
                        } else {
                        }
                    }
                } else {
                }
                i = i + 1;
            }
            return menor;
        }
    }
}

int main() {
    int numerodeMoedas, alvo;
    scanf("%d %d", &numerodeMoedas, &alvo);

    int arrayMonetario[numerodeMoedas];
    int i = 0;
    while (i < numerodeMoedas) {
        scanf("%d", &arrayMonetario[i]);
        i = i + 1;
    }

    organizaArray(arrayMonetario, numerodeMoedas);

    int resultado = minimaMoedas(arrayMonetario, numerodeMoedas, alvo);
    printf("%d\n", resultado);

    return 0;
}
