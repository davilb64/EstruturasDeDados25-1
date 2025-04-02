#include <stdio.h>

int main(){
    int TamanhoArray;
    double TaxaPositivo, TaxaNegativo, TaxaZero, Postivos = 0, Negativos = 0, Zeros = 0;

    scanf ("%d",&TamanhoArray);
    int Array[TamanhoArray];

    for (int i = 0; i < TamanhoArray; i++)
    {
        scanf("%d",&Array[i]);
        if (Array[i] > 0)
        {
            Postivos++;
        }
        else if (Array[i] < 0)
        {
            Negativos++;
        }
        else
        {
            Zeros++;
        }
    }
        TaxaPositivo = Postivos/TamanhoArray;
        TaxaNegativo = Negativos/TamanhoArray;
        TaxaZero = Zeros/TamanhoArray;

        printf("%.6lf\n%.6lf\n%.6lf\n",TaxaPositivo,TaxaNegativo,TaxaZero);
    
    
}