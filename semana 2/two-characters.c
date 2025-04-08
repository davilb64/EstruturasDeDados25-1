#include <stdio.h>

int main() {
    int tamanhoString, caracteresDistintos = 0, tamanhoFinal;
    scanf("%d",&tamanhoString);
    char string[tamanhoString];
    scanf("%s",string);
    int vetorArmazem[tamanhoString];

    for (int i = 0; i < tamanhoString; i++)
    {
        vetorArmazem[i] = string[i];
    }
    for (int i = 0; i < tamanhoString; i++)
    {
        for (int j = i+1; j < tamanhoString; j++)
        {
            if (vetorArmazem[i] == vetorArmazem[j])
            {
                vetorArmazem[i] = 0;
            }
            
        }
        
    }
    
    for (int i = 0; i < tamanhoString; i++)
    {
        if (vetorArmazem[i] != 0)
        {
            caracteresDistintos++;
        }
        
    }
    
    if (caracteresDistintos == 2)
    {
        for (int i = 0; i < tamanhoString; i++)
        {
            if (string[i] != string[i+1])
            {
                /* code */
            }
            else
            {
                tamanhoFinal = 0;
                break;
            }
        }
    }
    else
    {
        for (int i = 0; i < tamanhoString; i++)
        {
            char stringTemp[tamanhoString];
            for (int j = 0; j < tamanhoString; j++)
            {
                stringTemp[j] = string[j];
            }
            for (int j = 0; j < tamanhoString; i++)
            {
                if (stringTemp[i] == stringTemp[j])
                {
                    stringTemp[j] = '0';
                }
                
                
                
            }
            
            



        }
        
    }
    
    
    
    
    
    return 0;
}
