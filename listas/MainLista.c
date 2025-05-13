#include <stdio.h>
#include "Lista.h"

int main() {
  Lista* minhaLista = criaLista();

  // Adiciona elementos
  add(minhaLista, 10);
  add(minhaLista, 20);
  append(minhaLista, 30);
  insert(minhaLista, 2, 25); // Insere 25 na posição 2

  // Imprime a lista
  imprimeLista(minhaLista);

  // Remove e verifica elementos
  printf("Removendo 10: %s\n", removeItem(minhaLista, 10) ? "Removido" : "Não encontrado");
  imprimeLista(minhaLista);

  // Pop e operações adicionais
  printf("Pop último: %d\n", pop(minhaLista));
  imprimeLista(minhaLista);
  printf("Pop posição 0: %d\n", popPos(minhaLista, 0));
  imprimeLista(minhaLista);

  // Verifica se a lista está vazia
  printf("Lista está vazia: ");
  if (isEmpty(minhaLista)) {
      printf("Sim\n");
  } else {
      printf("Não (Tamanho: %d )\n", minhaLista->tamanho);
  }

  printf("Criando um ciclo na lista...\n");
  No* atual = minhaLista->inicio;
  while (atual->prox != NULL) {
      atual = atual->prox;
  }
  atual->prox = minhaLista->inicio; 

  printf("A lista possui ciclo: ");
  if (hasCicle(minhaLista)) {
      printf("Sim\n");
  } else {
      printf("Não\n");
  }

liberaLista(minhaLista);
printf("Lista liberada!!!\n");

  return 0;
}