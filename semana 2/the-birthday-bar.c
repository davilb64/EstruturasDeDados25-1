#include <stdio.h>

int main() {
    int tamanhoBarra;
    scanf("%d",&tamanhoBarra);
    int vetorBarra[tamanhoBarra];
    
    for (int i = 0; i < tamanhoBarra; i++)
    {
        scanf("%d",&vetorBarra[i]);
    }
    int diaAniversario, mesAniversario, somaAtual, possibilidades = 0;

    scanf("%d %d",&diaAniversario,&mesAniversario);

    for (int i = 0; i < (tamanhoBarra-mesAniversario+1); i++)
    {
        somaAtual = 0;
        for (int j = 0; j < mesAniversario; j++)
        {
            somaAtual += vetorBarra[i+j];
        }
        if (somaAtual == diaAniversario)
        {
            possibilidades++;
        }
        
    }
    printf("%d\n",possibilidades);
    
    return 0;
}
