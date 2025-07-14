#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int dado;
    struct No* prox;
} TipoNo;

typedef struct Pilha{
  TipoNo* topo;   // Ponteiro para o topo da pilha
  int tamanho; // Número de elementos na pilha
} TipoPilha;

TipoPilha* Stack(){
    TipoPilha* pilha = (TipoPilha*) malloc(sizeof(TipoPilha));
    if (pilha) {
        pilha->topo = NULL;
        pilha->tamanho = 0;
    }
    return pilha;
}

void push(TipoPilha* p, int item){
    TipoNo* novo = (TipoNo*) malloc(sizeof(TipoNo));
    if (novo) {
        novo->dado = item;
        novo->prox = p->topo;
        p->topo = novo;
        p->tamanho++;
    }
}
void pop(TipoPilha* p){
    if (p->topo != NULL) {
        TipoNo* temp = p->topo;
        p->topo = p->topo->prox;
        free(temp);
        p->tamanho--;
    } else {
        
    }
}

int peek(TipoPilha *p){
    if (p->topo != NULL) {
        return p->topo->dado;
    } else {
        return -1;
    }
}

int main()
{
    TipoPilha* pilha = Stack();
    int Numeros, Atual, Soma = 0;
    scanf("%d",&Numeros);
    for (int i = 0; i < Numeros; i++)
    {
        scanf("%d",&Atual);
        if (Atual == 0)
        {
            pop(pilha);
        }
        else
        {
            push(pilha, Atual);
        }
    }
    while (peek(pilha) != -1)
    {
        Soma = Soma + peek(pilha);
        pop(pilha);
    }
    
    printf("%d\n",Soma);
    
    return 0;
}
