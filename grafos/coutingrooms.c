#include <stdio.h>
#include <stdlib.h>

typedef struct grafo
{
    int grauMaximo;
    int vertices;
    int** arestas;
}grafo;

grafo* criarGrafo(int vertices, int grauMaximo){
    grafo* g = (grafo*)malloc(sizeof(grafo));
    g->vertices = vertices;
    g->grauMaximo = grauMaximo;
    g->arestas = (int**)malloc(vertices * sizeof(int*));
    for (int i = 0; i < vertices; i++)
    {
        g->arestas[i] = (int*)malloc(grauMaximo * sizeof(int));
        for (int j = 0; j < grauMaximo; j++)
        {
            g->arestas[i][j] = -1; 
        }
    }
    return g;
}
void adicionaAresta(grafo* g, int origem, int destino){
    for (int i = 0; i < g->grauMaximo; i++)
    {
        if (g->arestas[origem][i] == -1)
        {
            g->arestas[origem][i] = destino;
            break;
        }
    }
}

void matrizparagrafo (grafo* g, int** matriz, int altura, int largura){
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; j++)
        {
            if (matriz[i][j] == 1)
            {
                adicionaAresta(g, i, j);
            }
        }
    }
}

int main()
{
    int altura, largura;
    
    scanf("%d %d",&altura,&largura);
    int vertices = altura*largura;
    grafo* grafo = criarGrafo(vertices,4);
    char matriz[altura][largura];
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < largura; i++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    matrizparagrafo(grafo, matriz, altura, largura);
    
    
    return 0;
}
