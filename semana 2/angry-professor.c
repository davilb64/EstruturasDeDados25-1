#include <stdio.h>

int angryProfessor(int analise){
    if (analise <= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}

int main() {
    int casos, quantidadeAlunos, barreira, analisadoAtual, alunosAdiantados = 0;
    scanf("%d",&casos);
    for (int i = 0; i < casos; i++)
    {
        alunosAdiantados = 0;
        scanf("%d %d",&quantidadeAlunos,&barreira);
        int vetorHorarios[quantidadeAlunos];
        for (int j = 0; j < quantidadeAlunos; j++)
        {
            scanf("%d",&vetorHorarios[i]);
            analisadoAtual = angryProfessor(vetorHorarios[i]);
            if (analisadoAtual == 1)
            {
                alunosAdiantados++;
            }
        }
        if (alunosAdiantados>=barreira)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    

    return 0;
}
