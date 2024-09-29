#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("%d is not between 0 and 4\n", a);
    } else {
        if (a > 4) {
            printf("%d is not between 0 and 4\n", a);
        } else {
            printf("%d is  between 0 and 4\n", a);
        }
    }
    
    return 0;
}