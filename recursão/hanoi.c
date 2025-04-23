#include <stdio.h>


int count = 0; // Contador de movimentos
/* 
* Funçao recursiva que movimenta os discos entre os pinos
* Pino Origem = 0
* Pino Auxiliar = 1
* Pino Destino = 2
*/
void TorreHanoi(int origem, int destino, int auxiliar, int quantidade){
    if( quantidade == 1 ){
    printf("Move de %d para %d\n", origem, destino);
    count+=1;
    }else{
    TorreHanoi(origem, auxiliar, destino, quantidade-1);
    TorreHanoi(origem, destino, auxiliar, 1);
    TorreHanoi(auxiliar, destino, origem, quantidade-1);
}
}

int main(){
  // Chama a função Torre de Hanoi passando como parâmetro a origem, o destino, o pino auxiliar e a quantidade de discos
    int quantidade; // Nº de discos
    printf("Quantidade de discos: ");
    scanf("%d",&quantidade);
    TorreHanoi(0, 2, 1, quantidade);
    printf("\nQuantidade de Discos: %d\n", quantidade);
    printf("Nº minimo de movimentos: %d\n\n", count);
    return 0;
}