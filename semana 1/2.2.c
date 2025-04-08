#include <stdio.h>

int main(){
    int TamanhoArray, Divisor, Divisiveis = 0;
    scanf("%d %d",&TamanhoArray,&Divisor);
    int Array[TamanhoArray];
    for (int i = 0; i < TamanhoArray; i++)
    {
        scanf("%d",&Array[i]);
    }
    
    for (int i = 0; i < TamanhoArray; i++)
    {
        for (int j = TamanhoArray-1; j > i; j--)
        {

            if (((Array[i] + Array[j]) % Divisor) == 0)
            {
                
                Divisiveis++;
            }
            
        }
        
    }
    printf("%d\n",Divisiveis);
    

    return 0;
    
}