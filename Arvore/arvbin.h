#ifndef ARVBIN_H
#define ARVBIN_H

typedef struct no
{
    int valor;
    struct no *esq;
    struct no *dir;
    
}No;

typedef struct arvore
{
    No *raiz;
    int tamanho;
}Arvore;

Arvore* cria_arvore();
void insere_elemento(Arvore *arvore, int valor);
void imprime_arvore_pre_ordem(No *no);
void imprime_arvore_em_ordem(No *no);
void imprime_arvore_pos_ordem(No *no);
void libera_arvore(No *no);
void remove_elemento(Arvore *arvore, int valor);

#endif