#include <stdio.h>
#include <stdlib.h>
#include "arvbin.h"

Arvore* cria_arvore(){
    Arvore *nova_arvore = (Arvore *)malloc(sizeof(Arvore));
    if (nova_arvore != NULL) {
        nova_arvore->raiz = NULL;
        nova_arvore->tamanho = 0;
    }
    return nova_arvore;
}

void insere_elemento(Arvore *arvore, int valor){
    No *novo_no = (No *)malloc(sizeof(No));
    if (novo_no == NULL) {
        return; 
    }
    novo_no->valor = valor;
    novo_no->esq = NULL;
    novo_no->dir = NULL;

    if (arvore->raiz == NULL) {
        arvore->raiz = novo_no;
    } else {
        No *atual = arvore->raiz;
        No *pai = NULL;
        while (atual != NULL) {
            pai = atual;
            if (valor < atual->valor) {
                atual = atual->esq;
            } else {
                atual = atual->dir;
            }
        }

        if (valor < pai->valor) {
            pai->esq = novo_no;
        } else {
            pai->dir = novo_no;
        }
    }
    arvore->tamanho++;
    printf("Elemento %d inserido na árvore.\n", valor);
    printf("Tamanho da árvore: %d\n", arvore->tamanho);
}

void imprime_arvore_pre_ordem(No *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        imprime_arvore_pre_ordem(raiz->esq);
        imprime_arvore_pre_ordem(raiz->dir);
    }
}

void imprime_arvore_em_ordem(No *raiz) {
    if (raiz != NULL) {
        imprime_arvore_em_ordem(raiz->esq);
        printf("%d ", raiz->valor);
        imprime_arvore_em_ordem(raiz->dir);
    }
}

void remove_elemento(Arvore *arvore, int valor){

    No *atual = arvore->raiz;
    No *pai = NULL;

    while (atual != NULL && atual->valor != valor) {
        pai = atual;
        if (valor < atual->valor) {
            atual = atual->esq;
        } else {
            atual = atual->dir;
        }
    }

    if (atual == NULL) {
        printf("Elemento %d não encontrado na árvore.\n", valor);
        return;
    }

    if (atual->esq == NULL && atual->dir == NULL) { // Nó folha
        if (pai == NULL) {
            arvore->raiz = NULL; // Árvore fica vazia
        } else if (pai->esq == atual) {
            pai->esq = NULL;
        } else {
            pai->dir = NULL;
        }
    } else if (atual->esq == NULL || atual->dir == NULL) { // Nó com um filho
        No *filho = (atual->esq != NULL) ? atual->esq : atual->dir;
        if (pai == NULL) {
            arvore->raiz = filho; // Atualiza a raiz
        } else if (pai->esq == atual) {
            pai->esq = filho;
        } else {
            pai->dir = filho;
        }
    } else { // Nó com dois filhos
        No *sucessor = atual->dir;
        No *sucessor_pai = atual;

        while (sucessor->esq != NULL) {
            sucessor_pai = sucessor;
            sucessor = sucessor->esq;
        }

        atual->valor = sucessor->valor; // Substitui o valor do nó a ser removido

        if (sucessor_pai->esq == sucessor) {
            sucessor_pai->esq = sucessor->dir; // Remove o sucessor
        } else {
            sucessor_pai->dir = sucessor->dir;
        }
    }

    free(atual);
    arvore->tamanho--;
    printf("Elemento %d removido da árvore.\n", valor);
    printf("Tamanho da árvore: %d\n", arvore->tamanho);

}