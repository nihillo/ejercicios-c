#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    int n;
    printf("Enter a number of repetitions: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("Here is some useful text\n");
    }
    
    return 0;
}