#include <stdio.h>

int main() {
    int tamanhoString, caracteresDistintos = 0, tamanhoFinal = 0;
    scanf("%d", &tamanhoString);
    char string[tamanhoString + 1];
    scanf("%s", string);
    int vetorArmazem[tamanhoString];

    for (int i = 0; i < tamanhoString; i++) {
        vetorArmazem[i] = string[i];
    }

    for (int i = 0; i < tamanhoString; i++) {
        for (int j = i + 1; j < tamanhoString; j++) {
            if (vetorArmazem[i] == vetorArmazem[j]) {
                vetorArmazem[j] = 0;
            }
        }
    }

    for (int i = 0; i < tamanhoString; i++) {
        if (vetorArmazem[i] != 0) {
            caracteresDistintos++;
        }
    }

    if (caracteresDistintos == 2) {
        int alterna = 1;
        for (int i = 0; i < tamanhoString - 1; i++) {
            if (string[i] == string[i + 1]) {
                alterna = 0;
                break;
            }
        }
        if (alterna) {
            tamanhoFinal = tamanhoString;
        } else {
            tamanhoFinal = 0;
        }
    } else {
        for (int i = 0; i < tamanhoString; i++) {
            for (int j = i + 1; j < tamanhoString; j++) {
                if (string[i] != string[j]) {
                    char c1 = string[i];
                    char c2 = string[j];
                    char stringTemp[tamanhoString + 1];
                    int k = 0;

                    for (int l = 0; l < tamanhoString; l++) {
                        if (string[l] == c1 || string[l] == c2) {
                            stringTemp[k++] = string[l];
                        }
                    }
                    stringTemp[k] = '\0';

                    int alterna = 1;
                    for (int m = 0; m < k - 1; m++) {
                        if (stringTemp[m] == stringTemp[m + 1]) {
                            alterna = 0;
                            break;
                        }
                    }
                    if (alterna && k > tamanhoFinal) {
                        tamanhoFinal = k;
                    }
                }
            }
        }
    }

    printf("%d\n", tamanhoFinal);
    return 0;
}
