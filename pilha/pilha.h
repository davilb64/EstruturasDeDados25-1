#ifndef PILHA_H
#define PILHA_H

typedef struct No{
    int dado;
    struct No* prox;
} No;

typedef struct Pilha{
  No* topo;   // Ponteiro para o topo da pilha
  int tamanho; // Número de elementos na pilha
} Pilha;


Pilha* Stack();//cria lista
void push(Pilha* p, int item);//insere item no topo
void pop(Pilha* p);//remove o item do topo
int peek(Pilha* p);//retorna o item do topo
int isEmpty(Pilha* p);//olha se está vazia
int size(Pilha* p);//olha o tamanho

#endif