#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
    int x1, y1, x2, y2;

    puts("\n ***** Distancia de dos puntos *****");
    printf("\nCoordenada x1: "); scanf("%d", &x1);
    printf("\nCoordenada y1: "); scanf("%d", &y1);
    printf("\nCoordenada x2: "); scanf("%d", &x2);
    printf("\nCoordenada y2: "); scanf("%d", &y2);
    
    double cx = x2 - x1;
    double cy = y2 - y1;

    printf("%lf x %lf\n", cx, cy);

    double dist = sqrt(pow(cx, 2) + pow(cy, 2));

    printf("Distancia: %lf\n", dist);
    
    return 0;
}