#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

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
void pop(Pilha* p){
    if (p->topo != NULL) {
        No* temp = p->topo;
        p->topo = p->topo->prox;
        free(temp);
        p->tamanho--;
    } else {
        printf("Pilha vazia!\n");
    }
}
int peek(Pilha* p){
    if (p->topo != NULL) {
        return p->topo->dado;
    } else {
        return -1;
    }
}
int isEmpty(Pilha* p){
    return p->tamanho == 0;
}
int size(Pilha* p){
    return p->tamanho;
}
