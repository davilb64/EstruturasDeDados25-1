#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no* primeiro_filho;
    struct no* proximo_irmao;
} No;

typedef struct arvore {
    No* raiz;
    int tamanho;
} ArvoreNaria;

ArvoreNaria* cria_arvore() {
    ArvoreNaria* abb = (ArvoreNaria*)malloc(sizeof(ArvoreNaria));
    if (abb == NULL) {
        return NULL;
    }
    abb->raiz = NULL;
    abb->tamanho = 0;
    return abb;
}

No* buscaNo(No* raiz, int valor) {
    if (raiz == NULL) return NULL;
    if (raiz->valor == valor) return raiz;
    No* filho = raiz->primeiro_filho;
    while (filho != NULL) {
        No* achou = buscaNo(filho, valor);
        if (achou != NULL) return achou;
        filho = filho->proximo_irmao;
    }
    return NULL;
}

void insere_elemento(int elementoInserido, int elementoPai, ArvoreNaria* arvore) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro na alocacao de memoria\n");
        return;
    }
    novoNo->valor = elementoInserido;
    novoNo->primeiro_filho = NULL;
    novoNo->proximo_irmao = NULL;

    if (arvore->tamanho == 0) {
        arvore->raiz = novoNo;
    } else {
        No* pai = buscaNo(arvore->raiz, elementoPai);
        if (pai != NULL) {
            if (pai->primeiro_filho == NULL) {
                pai->primeiro_filho = novoNo;
            } else {
                No* irmao = pai->primeiro_filho;
                while (irmao->proximo_irmao != NULL) {
                    irmao = irmao->proximo_irmao;
                }
                irmao->proximo_irmao = novoNo;
            }
        }
    }
    arvore->tamanho++;
}

int contaSubordinados(No* elemento) {
    if (elemento == NULL) return 0;
    int total = 0;
    No* filho = elemento->primeiro_filho;
    while (filho != NULL) {
        total += 1 + contaSubordinados(filho);
        filho = filho->proximo_irmao;
    }
    return total;
}

int main() {
    ArvoreNaria* a = cria_arvore();
    int funcionarios;
    scanf("%d", &funcionarios);
    int subordinado;
    insere_elemento(1, 0, a); // Raiz da árvore
    for (int i = 2; i < funcionarios+1; i++) {
        scanf("%d", &subordinado);
        insere_elemento(i, subordinado, a);
    }
    for (int i = 1; i <= funcionarios; i++) {
        No* no = buscaNo(a->raiz, i);
        printf("%d ", contaSubordinados(no));
    }
    printf("\n");
    return 0;
}