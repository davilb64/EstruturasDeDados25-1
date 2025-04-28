#include <stdio.h>

long long encontraQuantidades (int X, int Y){
    if (X == 0 && Y == 0)
    {
        return 1;
    }
    int x = 0, y = 0;

    if (X > 0)
    {
        x = encontraQuantidades(X-1,Y);
    }
    if (Y > 0)
    {
        y = encontraQuantidades(X, Y-1);
    }
    
    return x+y;
    
}

int main()
{
    int xFinal, yFinal;
    printf("Ponto final: ");
    scanf("%d %d",&xFinal,&yFinal);
    long long resultado = encontraQuantidades(xFinal, yFinal);
    printf("Quantidade possível de movimentos de 0,0 a %d,%d : %lld\n",xFinal,yFinal,resultado);
    return 0;
}