#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    float a, b;
    float result;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);
   
    result = a / b;
    printf("Result: %f\n", result);
    
    return 0;
}