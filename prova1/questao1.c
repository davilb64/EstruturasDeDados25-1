#include <stdio.h>
#include <math.h>

int main()
{
    int buracos;
    double xCoelho, yCoelho, xRaposa, yRaposa, buracoAtualx, buracoAtualy;
    double menorX = 0, menorY = 0;
    int coelhoEscapa = 0;

    scanf("%d %lf %lf %lf %lf", &buracos, &xCoelho, &yCoelho, &xRaposa, &yRaposa);

    for (int i = 0; i < buracos; i++)
    {
        scanf("%lf %lf", &buracoAtualx, &buracoAtualy);

        double distCoelho = sqrt(pow(buracoAtualx - xCoelho, 2) + pow(buracoAtualy - yCoelho, 2));
        double distRaposa = sqrt(pow(buracoAtualx - xRaposa, 2) + pow(buracoAtualy - yRaposa, 2));

        if (distCoelho * 2 < distRaposa)
        {
            menorX = buracoAtualx;
            menorY = buracoAtualy;
            coelhoEscapa = 1;
            break; 
        }
    }

    if (coelhoEscapa)
    {
        printf("O coelho pode escapar pelo buraco (%.3lf,%.3lf).\n", menorX, menorY);
    }
    else
    {
        printf("O coelho nao pode escapar.\n");
    }

    return 0;
}