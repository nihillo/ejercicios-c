#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int r = a % 2;

    if (r == 0) {
        printf("%d is even. Remainder: %d\n", a, r);
    } else {
        printf("%d is odd. Remainder: %d\n", a, r);
    }
    
    return 0;
}