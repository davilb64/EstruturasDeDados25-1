#include <stdio.h>
#include <stdlib.h>
#include "arvbin.h"

int main()
{
	int dado;
	Arvore *arvore = cria_arvore();
	while (scanf("%d", &dado), dado != -1)
	{
		insere_elemento(arvore, dado);
	}
	imprime_arvore_em_ordem(arvore->raiz);
	printf("\n");
	
	return 0;
}
