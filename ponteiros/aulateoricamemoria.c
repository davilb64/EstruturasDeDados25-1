#include <stdio.h>

int main()
{
    int a = 10;
    int *x = &a;
    int **y = &x;
    printf("a: %d\n",a);
    printf("a: %d\n",*x);
    printf("a: %d\n",**y);
}