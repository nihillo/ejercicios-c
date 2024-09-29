#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Hacer un programa que lea tres números enteros positivos distintos e 
 * imprima el mayor valor de los tres.
*/

int main(int argc, char *argv[]) {
    int arrSize = 3;
    int intArr[3];

    printf("Primer número: "); scanf("%d", &intArr[0]);
    printf("Segundo número: "); scanf("%d", &intArr[1]);
    printf("Tercer número: "); scanf("%d", &intArr[2]);

    int higher = -2147483648; // mínimo valor posible para int
    bool equalHighers = false;

    for (int i = 0; i < arrSize; i++) {
        if (intArr[i] == higher) {
            equalHighers = intArr[i];
        } else if (intArr[i] > higher) {
            higher = intArr[i];
            equalHighers = false;
        }
    }

    if (equalHighers) {
        puts("Error: múltiples coincidencias de número más alto");
    } else {
        printf("El número más alto es %d\n", higher);
    }

    return 0;
}