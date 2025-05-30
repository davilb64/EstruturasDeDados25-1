#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000001];
    int alfabeto[26] = {0}, maior = 0;
    scanf("%s", str);

    int tamString = strlen(str);

    for (int i = 0; i < tamString; i++)
    {
        alfabeto[str[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (alfabeto[i] > maior)
        {
            maior = alfabeto[i];
        }
    }
    
    printf("%d\n", maior);
    
    return 0;
}
