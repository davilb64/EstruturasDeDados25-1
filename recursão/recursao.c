#include <stdio.h>

int soma(int arr[],int n){
    if (n <= 0)
    {
        return 0;
    }
    else
    {
        return arr[n - 1] + soma(arr, n = 1);
    }
    
    
}

int fatorial (int n){
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fatorial(n-1);
    }
}

int fibonacci(int n){
    if (n == 0)
    {
        return 0;
    }
    
}

int main()
{
    int entrada;
    scanf("%d",&entrada);
    printf("%d\n",fatorial(entrada));
    return 0;
}
