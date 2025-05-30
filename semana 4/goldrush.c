#include <stdio.h>

int verificaMonte(int monteAtual, int alvo) {
    if (monteAtual % 3 != 0) {
        return 0;
    }

    int monteMenor = monteAtual / 3;
    int monteMaior = monteMenor * 2;

    if (alvo == monteMenor || alvo == monteMaior) {
        return 1;
    }

    return verificaMonte(monteMenor, alvo) || verificaMonte(monteMaior, alvo);
}

int main() {
    int casos, alvo, tamanhoMonte;
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++) {
        scanf("%d %d", &tamanhoMonte, &alvo);
        if (alvo > tamanhoMonte) {
            printf("NO\n");
        } 
        else if (tamanhoMonte == alvo) {
            printf("YES\n");
        } 
        else {
            if (verificaMonte(tamanhoMonte, alvo) == 1) {
                printf("YES\n");
            } 
            else {
                printf("NO\n");
            }
        }
    }

    return 0;
}
