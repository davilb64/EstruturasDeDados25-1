#include <stdio.h>

void alteraNota(double *nota){
    double notaamais;
    printf("Nota adicionada: ");
    scanf("%lf", &notaamais);

    if (*nota + notaamais > 10.0){
        printf("Nota excederia 10.0! Definindo nota como 10.0.\n");
        *nota = 10.0;
    } else {
        *nota += notaamais;
    }
}

double mediaTurma(double *vetor, int quantidade){
    double soma = 0;
    for (int i = 0; i < quantidade; i++){
        soma += vetor[i];
    }
    return (soma / quantidade);
}

int main(){
    int quantidadeAlunos, opcoes = 0;
    printf("Quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos);

    double arrayAlunos[quantidadeAlunos];

    for (int i = 0; i < quantidadeAlunos; i++){
        double notaInicial;
        do {
            printf("Nota inicial do aluno %d (0 a 10): ", i);
            scanf("%lf", &notaInicial);
            if (notaInicial < 0 || notaInicial > 10.0){
                printf("Nota inválida. Digite um valor entre 0 e 10.\n");
            }
        } while (notaInicial < 0 || notaInicial > 10.0);
        arrayAlunos[i] = notaInicial;
    }

    while (opcoes != 9){
        printf("\n1 - Aumentar nota\n2 - Média da turma\n9 - Sair\n");
        scanf("%d", &opcoes);

        if (opcoes == 9){
            break;
        }

        if (opcoes == 1){
            int aluno = -1;
            printf("Qual aluno? (número de 0 a %d)\n", quantidadeAlunos - 1);
            scanf("%d", &aluno);

            if (aluno >= 0 && aluno < quantidadeAlunos){
                alteraNota(&arrayAlunos[aluno]);
                printf("Nota atual do aluno %d: %.2f\n", aluno, arrayAlunos[aluno]);
            } else {
                printf("Aluno inválido!\n");
            }

        } else if (opcoes == 2){
            double media = mediaTurma(arrayAlunos, quantidadeAlunos);
            printf("Média da turma: %.2f\n", media);
        } else {
            printf("Opção inválida!\n");
        }

        opcoes = 0;
    }

    return 0;
}
