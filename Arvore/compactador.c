#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no
{
    int valor;
    struct no *esq;
    struct no *dir;
} No;

typedef struct arvore
{
    No *raiz;
    int tamanho;
} ArvoreBB;

ArvoreBB *cria_arvore()
{
    ArvoreBB *abb = malloc(sizeof(ArvoreBB));
    if (abb == NULL)
    {
        return NULL;
    }
    abb->raiz = NULL;
    abb->tamanho = 0;
    return abb;
}

void insere_elemento_direita(No *pai, No *novoNo)
{
    if (pai->dir == NULL)
    {
        pai->dir = novoNo;
    }
    else
    {
        insere_elemento_direita(pai->dir, novoNo);
    }
}

void insere_elemento_esquerda(No *pai, No *novoNo)
{
    if (pai->esq == NULL)
    {
        pai->esq = novoNo;
    }
    else
    {
        insere_elemento_esquerda(pai->esq, novoNo);
    }
}

void imprime_arvore_pre_order(No *elemento)
{
    if (elemento != NULL)
    {
        printf("%d ", elemento->valor);
        imprime_arvore_pre_order(elemento->esq);
        imprime_arvore_pre_order(elemento->dir);
    }
}
void imprime_arvore_pos_order(No *elemento)
{
    if (elemento != NULL)
    {
        imprime_arvore_pos_order(elemento->esq);
        imprime_arvore_pos_order(elemento->dir);
        printf("%d ", elemento->valor);
    }
}

int pegaMenor(int *vetorAscii)
{
    int menor = 999, menorPosicao = -1;
    for (int i = 0; i < 256; i++)
    {
        if (vetorAscii[i] > 0 && vetorAscii[i] < menor)
        {
            menor = vetorAscii[i];
            menorPosicao = i;
        }
    }
    vetorAscii[menorPosicao] = 0;
    return menor;
}

void compactaString(char *stringACompactar, int *vetorAscii, int tamanhoString)
{
    
}

int main()
{
    char stringACompactar[100];
    int tamanhoString;
    int vetorAscii[256] = {0};
    printf("Digite a string a ser compactada: ");
    scanf("%s", stringACompactar);
    tamanhoString = strlen(stringACompactar);
    for (int i = 0; i < tamanhoString; i++)
    {
        vetorAscii[(int)stringACompactar[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        printf("%d ", vetorAscii[i]);
    }
    
    compactaString(stringACompactar, vetorAscii, tamanhoString);

    return 0;
}

    