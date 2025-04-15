#include <stdio.h>

enum DiaDaSemana {
    DOMINGO,
    SEGUNDA,
    TERÇA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

struct student
{
    char nome[20];
    int nota;
    int idade;
};

//um de cada vez
union ab
{
    int a;
    double b;
};

int main(){
    union ab valor;
    FILE* f;

    valor.a = 10;
    printf("Usando a: %d | Usando b (mesma memória): %lf\n",valor.a,valor.b);
    valor.b = 5.5;

    printf("Usando a (mesma memória): %d | Usando b : %lf\n",valor.a,valor.b);

    return 0;

    
}