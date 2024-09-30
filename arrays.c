#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    float a[5];

    // for (int i = 0; i < 5; i++) {
    //     printf("Enter value for position %d: ", i);
    //     scanf("%f", &a[i]);
    // }

    // float a[5] = {10, 13, 2.55, 45, 4};

    // float a[]; // error por no declarar la longitud
    // a = {1, 3 , 7, 7, 43.4}; // error porque sólo es posible inicializar el array con {...} en la declaración

    // float a[] = {12, 34, 6, 4, 34};
 
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        printf("Value in position %d: %f\n", i, a[i]);
        sum += a[i];
    }

    printf("Sum: %f\n", sum);

    return 0;
}