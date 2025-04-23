#include <stdio.h>

int decimalQualquer(int entrada, int base){
    if (entrada <= 0)
    {
        return 0;
    }
    else if (base == 1)
    {
        return 0;
    }
    
    else
    {
        return entrada % base + 10 * (decimalQualquer(entrada/base, base));
    }
}

int main()
{
    int entrada, base;
    printf("Número: ");
    scanf("%d",&entrada);
    printf("Base(até 10): ");
    scanf("%d",&base);
    printf("%d\n",decimalQualquer(entrada,base));

    return 0;
}
