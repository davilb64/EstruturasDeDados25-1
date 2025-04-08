#include <stdio.h>

void timeConversion(char Horario[11]){
    if (Horario[8] == 'P')
    {
        int VetorHoras[2];
        VetorHoras[0] = Horario[0]-48;
        VetorHoras[1] = Horario[1]-48;
        if (VetorHoras[0] == 1 && VetorHoras[1] == 2)
        {
            /* code */
        }
        else
        {
            VetorHoras[0] += 1;
            VetorHoras[1] += 2;
            Horario[0] = VetorHoras[0]+48;
            Horario[1] = VetorHoras[1]+48;
        }
    }
    else
    {
        int VetorHoras[2];
        VetorHoras[0] = Horario[0]-48;
        VetorHoras[1] = Horario[1]-48;
        if (VetorHoras[0] == 1 && VetorHoras[1] == 2)
        {
            VetorHoras[0] = 0;
            VetorHoras[1] = 0;
            Horario[0] = VetorHoras[0]+48;
            Horario[1] = VetorHoras[1]+48;
        }
    }
    
    
}

int main(){
    char HorarioEntrada[11];
    scanf("%s",HorarioEntrada);
    timeConversion(HorarioEntrada);
    for (int i = 0; i < 8; i++)
    {
        printf("%c",HorarioEntrada[i]);
    }
    printf("\n");
    
}