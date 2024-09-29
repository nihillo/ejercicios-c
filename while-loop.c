#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int i;
    printf("Enter a number of repetitions: ");
    scanf("%d", &i);

    while (i > 0) {
        printf("Here's some useful text\n");
        i--;
    }
    
    return 0;
}