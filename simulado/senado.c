#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char valor;
    struct Node* prox;
}TipoNo;

typedef struct Queue
{
    int tamanho;
    TipoNo* inicio;
}TipoFila;

TipoFila* CriaFila(){
    TipoFila* fila = (TipoFila*) malloc(sizeof(TipoFila));
    if (fila) {
        fila->inicio = NULL;
        fila->tamanho = 0;
    }
    return fila;
}

void enqueue(TipoFila* f, char item){
    TipoNo* novo = (TipoNo*) malloc(sizeof(TipoNo));
    if (novo)
    {
        novo->valor = item;
        novo->prox = NULL;
        if (f->inicio == NULL) {
            f->inicio = novo;
        } else {
            TipoNo* temp = f->inicio;
            while (temp->prox != NULL) {
                temp = temp->prox;
            }
            temp->prox = novo;
        }
        f->tamanho++;
    }
}

char front(TipoFila f){
    if (f.inicio != NULL) {
        return f.inicio->valor;
    } else {
        return -1;
    }
}

void dequeue(TipoFila* f){
    if (f->inicio != NULL) {
        TipoNo* temp = f->inicio;
        f->inicio = f->inicio->prox;
        free(temp);
        f->tamanho--;
    }
}



int main(){
    int TamanhoString;
    char DeputadoAtual;
    TipoFila* fila1 = CriaFila();
    TipoFila* filaaux = CriaFila();
    scanf("%d",&TamanhoString);
    getchar();
    for (int i = 0; i < TamanhoString; i++)
    {
        scanf("%c",&DeputadoAtual);
        enqueue(fila1, DeputadoAtual);
    }
    getchar();

    int contaR = 0, contaI = 0;

    TipoNo* temp = fila1->inicio;
    while (temp != NULL) {
        if (temp->valor == 'R') contaR++;
        else if (temp->valor == 'I') contaI++;
        temp = temp->prox;
    }

    int banR = 0, banI = 0;

    while (contaR > 0 && contaI > 0) {
        char atual = front(*fila1);
        dequeue(fila1);

        if (atual == 'R') {
            if (banR > 0) {
                banR--;
                contaR--;
            } else {
                banI++;
                enqueue(fila1, 'R');
            }
        } else if (atual == 'I') {
            if (banI > 0) {
                banI--;
                contaI--;
            } else {
                banR++;
                enqueue(fila1, 'I');
            }
        }
    }

    if (contaR > 0)
        printf("Republica\n");
    else
        printf("Imperio\n");
    
    
    
    return 0;
}
