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

void enqueue(TipoFila* f, int item){
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

typedef struct Pilha{
    TipoNo* topo;
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
    TipoNo* novo = (TipoNo*) malloc(sizeof(TipoNo));
    if (novo) {
        novo->valor = item;
        novo->prox = p->topo;
        p->topo = novo;
        p->tamanho++;
    }
}

int pop(Pilha* p){
    if (p->topo != NULL) {
        TipoNo* temp = p->topo;
        int valor = temp->valor;
        p->topo = p->topo->prox;
        free(temp);
        p->tamanho--;
        return valor;
    } else {
        return -1;
    }
}

void excluiFila(TipoFila* f){
    while (f->inicio != NULL) {
        dequeue(f);
    }
    free(f);
}

void excluiPilha(Pilha* p){
    while (p->topo != NULL) {
        pop(p);
    }
    free(p);
}

int main()
{
    int Testes;
    scanf("%d", &Testes);
    for (int i = 0; i < Testes; i++)
    {
        int N;
        scanf("%d", &N);
        int* entrada = (int*)malloc(N * sizeof(int));
        int* saida = (int*)malloc(N * sizeof(int));
        for (int j = 0; j < N; j++)
            scanf("%d", &entrada[j]);
        for (int j = 0; j < N; j++)
            scanf("%d", &saida[j]);

        TipoFila* fila = CriaFila();
        Pilha* pilha = Stack();
        for (int j = 0; j < N; j++) {
            enqueue(fila, entrada[j]);
            push(pilha, entrada[j]);
        }

        int is_stack = 1, is_queue = 1;
        for (int j = 0; j < N; j++) {
            if (is_queue) {
                if (front(*fila) == saida[j]) {
                    dequeue(fila);
                } else {
                    is_queue = 0;
                }
            }
            if (is_stack) {
                if (pop(pilha) != saida[j]) {
                    is_stack = 0;
                }
            }
        }

        if (is_stack && is_queue)
            printf("both\n");
        else if (is_stack)
            printf("stack\n");
        else if (is_queue)
            printf("queue\n");
        else
            printf("neither\n");

        excluiFila(fila);
        excluiPilha(pilha);
        free(entrada);
        free(saida);
    }
    return 0;
}

