#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

// Criação de uma nova fila
Fila* Queue() {
    Fila* fila = (Fila*) malloc(sizeof(Fila));
    if (fila) {
        fila->inicio = NULL;
        fila->tamanho = 0;
    }
    return fila;
}

int isEmpty(Fila f){
    if (f.tamanho == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(Fila* f, int item){
    No* novo = (No*) malloc(sizeof(No));
    if (novo)
    {
        novo->dado = item;
        novo->prox = NULL;
        if (f->inicio == NULL) {
            f->inicio = novo;
        } else {
            No* temp = f->inicio;
            while (temp->prox != NULL) {
                temp = temp->prox;
            }
            temp->prox = novo;
        }
        f->tamanho++;
    }
}

void dequeue(Fila f){
    if (f.inicio != NULL) {
        No* temp = f.inicio;
        f.inicio = f.inicio->prox;
        free(temp);
        f.tamanho--;
    } else {
        printf("Fila vazia!\n");
    }
}

int front(Fila f){
    if (f.inicio != NULL) {
        return f.inicio->dado;
    } else {
        printf("Fila vazia!\n");
        return -1;
    }
}

void size(Fila f){
    printf("Tamanho da fila: %d\n", f.tamanho);
}

void verificaIdade(Fila f){
    if (f.inicio != NULL) {
        int idade = f.inicio->dado;
        printf("A pessoa na frente da fila tem %d anos.\n", idade);
    } 
    else {
        printf("Fila vazia!\n");
    }
}