#include <stdio.h>
#include "fila.h"

int main(){
    Fila* fila = Queue();
    enqueue(fila, 7);
    enqueue(fila, 6);
    enqueue(fila, 5);
    enqueue(fila, 4);
    enqueue(fila, 3);
    enqueue(fila, 2);
    enqueue(fila, 1);



    for (int i = 0; i < 7; i++)
    {
        front(*fila);
        enqueue(fila, front(*fila));
        dequeue(*fila);
    }

}