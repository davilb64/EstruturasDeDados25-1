#ifndef PILHA_H
#define PILHA_H

typedef struct grafo{
    int ehPonderado;
    int grauMaximo;
    int vertices;
    int** arestas;
    double** pesos;
    int* grau;
} grafo;

grafo* criarGrafo(int vertices, int ehPonderado, int grauMaximo);
void adicionaAresta(grafo* g, int origem, int destino, double peso);
void liberarGrafo(grafo* g);
int imprimeGrafo(grafo* g);

#endif