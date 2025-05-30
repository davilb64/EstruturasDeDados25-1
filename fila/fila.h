#ifndef FILA_H
#define FILA_H

typedef struct No{
    int dado;
    struct No* prox;
} No;

typedef struct Fila{
  No* inicio;  // Ponteiro para o início da lista
  int tamanho; // Número de elementos na lista
} Fila;


Fila* Queue();//cria lista
void enqueue(Fila* f, int item);//insere item no fim
void dequeue(Fila);//remove o item inicial
int front(Fila);//retorna o item inicial
int isEmpty(Fila);//olha se está vazia
void size(Fila);//olha o tamanho
void verificaIdade(Fila f);

#endif