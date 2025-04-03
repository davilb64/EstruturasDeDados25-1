#include <stdio.h>
#include <string.h>

int main(){
    char Entrada[100000];
    scanf("%s",Entrada);
    int Palavras = 1, Caracteres;
    Caracteres = strlen(Entrada);
    for (int i = 0; i < Caracteres; i++)
    {
        if (Entrada[i] >= 'A' && Entrada[i] <= 'Z')
        {
            Palavras++;
        }
        
    }
    printf("%d\n",Palavras);
    
    
}