#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int dado;
    struct No* prox;
} No;

typedef struct Pilha{
    No* topo;
    int tamanho;
} Pilha;



Pilha* Stack(){
    Pilha* pilha = (Pilha*) malloc(sizeof(Pilha));
    if (pilha) {
        pilha->topo = NULL;
        pilha->tamanho = 0;
    }
    return pilha;
}

void push(Pilha* p, int item){
    No* novo = (No*) malloc(sizeof(No));
    if (novo) {
        novo->dado = item;
        novo->prox = p->topo;
        p->topo = novo;
        p->tamanho++;
    }

}
int pop(Pilha* p){
    if (p->topo != NULL) {
        No* temp = p->topo;
        int valor = temp->dado;
        p->topo = p->topo->prox;
        free(temp);
        p->tamanho--;
        return valor;
    } else {
        return -1;
    }
}

int main()
{
    int Operacoes, Operacao, Carta;
    scanf("%d",&Operacoes);
    Pilha* pilha = Stack();
    for (int i = 0; i < 100; i++)
    {
        push(pilha, 0);
    }
    
    for (int i = 0; i < Operacoes; i++)
    {
        scanf("%d",&Operacao);
        if (Operacao == 1)
        {
            scanf("%d",&Carta);
            push(pilha, Carta);
        }
        else if (Operacao == 2)
        {
            printf("%d\n", pop(pilha));
        }

    }

    return 0;
}
