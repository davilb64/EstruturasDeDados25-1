#include <stdio.h>

int main(){
    int LimiteScasa, LimiteTcasa, PosLaranjeira, PosMacieira, QuantLaranjas, QuantMacas, MacaIn = 0, LaranjaIn = 0;
    scanf("%d %d",&LimiteScasa,&LimiteTcasa);
    scanf("%d %d",&PosMacieira,&PosLaranjeira);
    scanf("%d %d",&QuantMacas,&QuantLaranjas);
    int VetorLaranja[QuantLaranjas], VetorMaca[QuantMacas];
    for (int i = 0; i < QuantMacas; i++)
    {
        scanf("%d",&VetorMaca[i]);
        if (((VetorMaca[i] + PosMacieira) >= LimiteScasa) && ((VetorMaca[i] + PosMacieira) <= LimiteTcasa))
        {
            MacaIn++;
        }
    }

    for (int i = 0; i < QuantLaranjas; i++)
    {
        scanf("%d",&VetorLaranja[i]);
        if (((VetorLaranja[i] + PosLaranjeira) >= LimiteScasa) && ((VetorLaranja[i] + PosLaranjeira) <= LimiteTcasa))
        {
            LaranjaIn++;
        }
    }
    
    printf("%d\n%d\n",MacaIn,LaranjaIn);
    
}