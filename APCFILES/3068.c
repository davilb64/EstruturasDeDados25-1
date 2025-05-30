#include <stdio.h>

int main() {
    int cordX1, cordY1, cordX2, cordY2;
    int teste = 1;
    while (scanf("%d %d %d %d", &cordX1, &cordY1, &cordX2, &cordY2), cordX1 || cordY1 || cordX2 || cordY2) {
        int meteoritos;
        scanf("%d", &meteoritos);
        int count = 0;
        for (int i = 0; i < meteoritos; i++) {
            int cordX, cordY;
            scanf("%d %d", &cordX, &cordY);
            if (cordX >= cordX1 && cordX <= cordX2 && cordY <= cordY1 && cordY >= cordY2) {
                count++;
            }
        }
        printf("Teste %d\n", teste++);
        printf("%d\n", count);
    }
    return 0;
}
