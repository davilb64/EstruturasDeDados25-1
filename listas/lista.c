#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

lista * cria_lista() {
    lista * l = (lista *) malloc (sizeof(lista));
    
    if (l == NULL)
    {
        printf("Nao foi possivel alocar\n");
        return NULL;
    }
    
    return l;
    
}