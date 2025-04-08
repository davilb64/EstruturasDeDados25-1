#include <stdio.h>

void ordena (int Vetor[10000], int TamanhoVetor){
    int i,j,aux;

    for(i = 0; i < TamanhoVetor-1; i++){
        for(j = i+1; j < TamanhoVetor; j++){
            if(Vetor[i] > Vetor[j]){
                aux = Vetor[i];
                Vetor[i] = Vetor[j];
                Vetor[j] = aux;
            }
        }
    }

}

void findZigZagSequence (int Vetor[10000], int TamanhoVetor){
    int i, aux;
    int meio = (TamanhoVetor - 1) / 2;

    aux = Vetor[meio];
    Vetor[meio] = Vetor[TamanhoVetor - 1];
    Vetor[TamanhoVetor - 1] = aux;

    int inicio = meio + 1;
    int fim = TamanhoVetor - 2;

    while (inicio < fim) {
        aux = Vetor[inicio];
        Vetor[inicio] = Vetor[fim];
        Vetor[fim] = aux;
        inicio++;
        fim--;
    }

    for (i = 0; i < TamanhoVetor; i++) {
        printf("%d ", Vetor[i]);
    }
    printf("\n");
}


int main() {
    int Repeticoes, TamanhoVetor;
    scanf("%d",&Repeticoes);
    for (int i = 0; i < Repeticoes; i++)
    {
        scanf("%d",&TamanhoVetor);
        int Vetor[TamanhoVetor];
        for (int j = 0; j < TamanhoVetor; j++)
        {
            scanf("%d",&Vetor[j]);
        }
        ordena(Vetor, TamanhoVetor);
        
        findZigZagSequence(Vetor, TamanhoVetor);
        
    }
    

    return 0;
}
