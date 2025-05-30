#include <stdio.h>
#include <string.h>
typedef struct{

       int idade;
       char sexo;
       char nome[100];

} pessoa;


int main(){

pessoa pessoa1;

    pessoa1.idade = 20;
    pessoa1.sexo =  'f';
    strcpy(pessoa1.nome,"Samara");

    printf("Nome: %s\n Idade: %d\n Sexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

    return 0;
}