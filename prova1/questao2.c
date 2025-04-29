#include <stdio.h>
#include <math.h>
int main()
{
    int quantidadeAlunos, atrasados = 0;
    scanf("%d",&quantidadeAlunos);
    int vetorAlunos[quantidadeAlunos];
    for (int i = 0; i < quantidadeAlunos; i++)
    {
        scanf("%d",&vetorAlunos[i]);
        if (vetorAlunos[i] > 0)
        {
            atrasados++;
        }
    }
    if (atrasados > ceil(quantidadeAlunos/2))
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
    }
    
    
    

    return 0;
}
