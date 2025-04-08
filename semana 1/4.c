#include <stdio.h>
#include <math.h>

int main(){
    //1 = gato a 2 = gato b 3 = mouse c
    int Casos;
    scanf("%d",&Casos);
    for (int i = 0; i < Casos; i++)
    {
        double GatoA, GatoB, RatoC, DiferencaA, DiferencaB;
        scanf("%lf %lf %lf",&GatoA,&GatoB,&RatoC);
        DiferencaA = fabs(GatoA - RatoC);
        DiferencaB = fabs(GatoB - RatoC);

        if (DiferencaA == DiferencaB)
        {
            printf("Mouse C\n");
        }
        else if (DiferencaA > DiferencaB)
        {
            printf("Cat B\n");
        }
        else
        {
            printf("Cat A\n");
        }
        
    }
    
    
}