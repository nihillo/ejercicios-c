#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int a;

    scanf("%d", &a);
    // a -= 1;
    // a--;
    // a *= 2
    a /= 4;

    printf("The predecesor of the number is: %d\n", a);

    return 0;
}