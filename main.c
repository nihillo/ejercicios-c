#include <stdio.h>
#include <stdlib.h>

/**
 * Main function
*/
int main(int argc, char *argv[]) {
    // Declare variables 
    int a, b;

    // Input values
    scanf("%d", &a);
    scanf("%d", &b);

    /* Output the result
       of the operations */
    printf("Sum: %d\n", a + b);
    printf("Product: %d\n", a * b);

    return 0;
}