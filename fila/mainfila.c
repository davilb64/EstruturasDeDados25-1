#include <stdio.h>
#include "fila.h"

int main() {

    int opcao = 0;
    Fila* fila = Queue();

    while (opcao != 7)
    {
        printf("\nAtualmente, sua fila esta ");
        if (isEmpty(*fila))
        {
            printf("vazia\n");
        }
        else
        {
            printf("com 1 ou mais elementos\n");
        }
        printf("Escolha uma opcao\n");
        printf("1 - Inserir item na fila\n2 - Remover item na frente da fila\n3 - Ver item inicial\n4 - Ver tamanho da fila\n5 - Verificar idade da pessoa na frente da fila\n7 - Sair do programa\n");

        scanf("%d",&opcao);
        
        if (opcao == 1)
        {
            int item;
            printf("Digite o item a ser inserido: ");
            scanf("%d", &item);
            enqueue(fila, item);
        }
        else if (opcao == 2)
        {
            dequeue(*fila);
        }
        else if (opcao == 3)
        {
            front(*fila);
        }
        else if (opcao == 4)
        {
            size(*fila);
        }
        else if (opcao == 5)
        {
            verificaIdade(*fila);
        }
        else if (opcao == 6)
        {
            printf("Opcao 6 selecionada, mas ainda nao implementada.\n");
        }
        
        else if (opcao == 7)
        {
            printf("Saindo do programa...\n");
            break;
        }
        else
        {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}