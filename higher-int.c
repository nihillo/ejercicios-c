#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * Hacer un programa que lea tres números enteros positivos distintos e 
 * imprima el mayor valor de los tres.
*/

int main(int argc, char *argv[]) {
    int arr_size = 3;
    int int_arr[3];

    printf("Primer número: "); scanf("%d", &int_arr[0]);
    printf("Segundo número: "); scanf("%d", &int_arr[1]);
    printf("Tercer número: "); scanf("%d", &int_arr[2]);

    int higher = -2147483648; // mínimo valor posible para int
    bool equal_highers = false;

    for (int i = 0; i < arr_size; i++) {
        if (int_arr[i] == higher) {
            equal_highers = int_arr[i];
        } else if (int_arr[i] > higher) {
            higher = int_arr[i];
            equal_highers = false;
        }
    }

    if (equal_highers) {
        puts("Error: múltiples coincidencias de número más alto");
    } else {
        printf("El número más alto es %d\n", higher);
    }

    return 0;
}