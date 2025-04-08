#include <stdio.h>

int main() {
    int Matriz[6][6], ColAtual, LinhaAtual, MaiorAtual = -999, Atual = 0;

    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 6; j++)
            scanf("%d", &Matriz[i][j]);
    for (LinhaAtual = 0; LinhaAtual < 4; LinhaAtual++) {
        for (ColAtual = 0; ColAtual < 4; ColAtual++) {
            Atual = Matriz[LinhaAtual][ColAtual] + Matriz[LinhaAtual][ColAtual+1] + Matriz[LinhaAtual][ColAtual+2] + Matriz[LinhaAtual+1][ColAtual+1] + Matriz[LinhaAtual+2][ColAtual] + Matriz[LinhaAtual+2][ColAtual+1] + Matriz[LinhaAtual+2][ColAtual+2];

            if (Atual > MaiorAtual) {
                MaiorAtual = Atual;

            }
        }
    }

    printf("%d\n", MaiorAtual);

    return 0;
}
