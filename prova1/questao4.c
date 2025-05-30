#include <stdio.h>

void resolve(int inicial, int final){
    int total = final - inicial;
    if (total <= 0)
    {
        printf("Data invalida!\n");
    }
    else
    {
        int dias = 0, horas = 0, minutos = 0, segundos = 0;
        while (total > 0)
        {
            if (total >= 86400)
            {
                dias++;
                total = total - 86400;
            }
            else if (total >= 3600)
            {
                horas++;
                total = total - 3600;
            }
            else if (total >= 60)
            {
                minutos++;
                total = total - 60;
            }
            else
            {
                segundos++;
                total = total - 1;
            }
            
        }
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dias,horas,minutos,segundos);
    }
    
    
    
    
}

int main()
{
    int diaInicial, diaFinal, horaInicial, horaFinal, minutoInicial, minutoFinal, segundoInicial, segundoFinal;
    scanf("%d %d:%d:%d",&diaInicial, &horaInicial, &minutoInicial, &segundoInicial);
    scanf("%d %d:%d:%d", &diaFinal, &horaFinal, &minutoFinal, &segundoFinal);
    
    int totalInicial = diaInicial * 86400 + horaInicial * 3600 + minutoInicial * 60 + segundoInicial;
    int totalFinal = diaFinal * 86400 + horaFinal * 3600 + minutoFinal * 60 + segundoFinal;
    resolve(totalInicial, totalFinal);
    
    return 0;
}
