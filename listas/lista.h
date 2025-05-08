#ifndef LISTA_H
#define LISTA_H

typedef struct no{
    int valor;
    struct no* prox;
} no;

typedef struct lista{
    no* inicio;
    int tamanho;
} lista;

lista* cria_lista();
void add(lista* l, int item);
int removeItem(lista* l, int item);
int search(lista* l, int item);
int isEmpty(lista* l);
void append(lista* l, int item);
int indice(lista* l, int item);
int insert(lista* l, int item, int pos);
int insereOrdenado(lista* l, int item);
int pop(lista* l);
int popPos(lista* l, int pos);
void imprimeLista(lista* l);
int liberarLista(lista* l);

#endif