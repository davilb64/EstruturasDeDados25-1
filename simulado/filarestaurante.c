#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int valor;
    struct Node* prox;
}TipoNo;

typedef struct Queue
{
    int tamanho;
    TipoNo* inicio;
}TipoFila;

TipoFila* CriaFila(){
    TipoFila* fila = (TipoFila*) malloc(sizeof(TipoFila));
    if (fila) {
        fila->inicio = NULL;
        fila->tamanho = 0;
    }
    return fila;
}

void enqueue(TipoFila* f, char item){
    TipoNo* novo = (TipoNo*) malloc(sizeof(TipoNo));
    if (novo)
    {
        novo->valor = item;
        novo->prox = NULL;
        if (f->inicio == NULL) {
            f->inicio = novo;
        } else {
            TipoNo* temp = f->inicio;
            while (temp->prox != NULL) {
                temp = temp->prox;
            }
            temp->prox = novo;
        }
        f->tamanho++;
    }
}

int front(TipoFila f){
    if (f.inicio != NULL) {
        return f.inicio->valor;
    } else {
        return -1;
    }
}

void dequeue(TipoFila* f){
    if (f->inicio != NULL) {
        TipoNo* temp = f->inicio;
        f->inicio = f->inicio->prox;
        free(temp);
        f->tamanho--;
    }
}

int main(){
    int Operacoes, Operacao, Ticket;
    TipoFila* fila = CriaFila();
    scanf("%d",&Operacoes);
    for (int i = 0; i < Operacoes; i++)
    {  
        scanf("%d",&Operacao);
        if (Operacao == 1)
        {
            scanf("%d",&Ticket);
            enqueue(fila,Ticket);
        }
        else if (Operacao == 2)
        {
            printf("%d\n",front(*fila));
            dequeue(fila);
        }
        
    }
    
    return 0;
}