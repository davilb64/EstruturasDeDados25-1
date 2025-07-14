#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char *nome;
} Profissao;

static unsigned int ultimo_tamanho_nome = 0;

Profissao* aloca_profissao(unsigned int tamanho_nome) {
    Profissao *p = (Profissao*)malloc(sizeof(Profissao));
    if (p == NULL) return NULL;
    p->nome = (char*)malloc(tamanho_nome * sizeof(char));
    if (p->nome == NULL) {
        free(p);
        return NULL;
    }
    ultimo_tamanho_nome = tamanho_nome;
    return p;
}

size_t bytes_alocados() {
    return sizeof(Profissao) + ultimo_tamanho_nome * sizeof(char);
}

int main() {
    unsigned int tamanho;
    scanf("%u", &tamanho);

    Profissao *p = aloca_profissao(tamanho);
    if (p == NULL) {
        printf("Erro de alocacao\n");
        return 1;
    }

    printf("%lu\n", bytes_alocados());

    free(p->nome);
    free(p);
    return 0;
}